# arduino-distance-sms

Código para arduino programado para ler valores de um sensor ultrasônico de distância, e enviar uma mensagem SMS caso a distância for maior que o alcance do sensor.

## Equipamento necessário
- [Shield GPRS] [1]
- Sensor de distância ultrasônico conectado nos pinos 23 e 25

O código desenvolvido foi baseado no código de [filipeflop][2], e a biblioteca utilizada para envio de sms pode ser vista [nesse repositório][3].  

[1]: http://www.filipeflop.com/pd-77833-gsm-gprs-shield-para-arduino-efcom-sim900-antena.html?ct=&p=1&s=7
[2]: http://blog.filipeflop.com/wireless/tutorial-arduino-gsm-shield.html
[3]: https://github.com/MarcoMartines/GSM-GPRS-GPS-Shield