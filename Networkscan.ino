#include <Wire.h>
#include<LiquidCrystal_I2C.h>
#include <ESP8266_Lib.h>

#include <SoftwareSerial.h>
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3,POSITIVE);
SoftwareSerial EspSerial(2, 3); // RX, TX

ESP8266 wifi(&EspSerial);


void setup()
{

  EspSerial.begin(115200);

  lcd.begin(16,2);
  lcd.clear();
   lcd.print(EspSerial);


  }

  void loop()
  {
    digitalWrite(2,HIGH);
 delay(1000);
     digitalWrite(2,LOW);
 delay(1000);  
    }
