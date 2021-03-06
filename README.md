# arduino-distance-sms

Código para arduino programado para ler valores de um sensor ultrasônico de distância, e enviar uma mensagem SMS caso a distância for maior que o alcance do sensor.

O código desenvolvido foi baseado no código de [filipeflop][2], e a biblioteca utilizada para envio de sms pode ser vista [nesse repositório][3].

Conforme instruído [aqui][2], o código GSM.cpp foi modificado para o Arduino Mega 2560, e as portas Tx e Rx do shield devem ser conectadas nas portas 50 e 51 do Arduino.

## Equipamento necessário
- [Arduino Mega 2560][4]
- [Shield GPRS] [1]
- [Sensor de distância ultrasônico SRF05][5] conectado nos pinos 23 e 25  

[1]: http://www.filipeflop.com/pd-77833-gsm-gprs-shield-para-arduino-efcom-sim900-antena.html?ct=&p=1&s=7
[2]: http://blog.filipeflop.com/wireless/tutorial-arduino-gsm-shield.html
[3]: https://github.com/MarcoMartines/GSM-GPRS-GPS-Shield
[4]: https://www.arduino.cc/en/Main/ArduinoBoardMega2560
[5]: https://www.robot-electronics.co.uk/htm/srf05tech.htm