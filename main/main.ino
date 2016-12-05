#define trigPin 23
#define echoPin 25
#define NUMEROCELULAR "+5551xxxxxxxx"
#define MENSAGEM_OUT "Carro saiu da garagem"
#define MENSAGEM_IN "Carro entrou na garagem"

#include "gsm_shield/SIM900.h"
//Carrega a biblioteca SMS
#include "gsm_shield/sms.h"

SMSGSM sms;
boolean started = false;

void setup()
{
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    if (gsm.begin(2400))
    {
        Serial.println("Shield GSM inicializado");
        started = true;
    }
    else
        Serial.println("Falha ao inicializar shield GSM");
}
void loop()
{
    int distance = calculateDistance();
    if (distance >= 200 || distance <= 0)
    {
        Serial.println("Fora de alcance");
        sendSMS(MENSAGEM_OUT);
    }
    else
    {
        Serial.print("A distância é: '");
        Serial.print(distance);
        Serial.println(" cm");
    }
    delay(1000);
}
int calculateDistance()
{
    long duration, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;
    return distance;
}
void sendSMS(char mensagem)
{
    if (started)
    {
        Serial.println("Sending SMS");
        //Envia um SMS para o numero selecionado
        //Formato sms.SendSMS(<numero>,<mensagem>)
        if (sms.SendSMS(NUMEROCELULAR, mensagem))
            Serial.println("Mensagem enviada");
    }
}
