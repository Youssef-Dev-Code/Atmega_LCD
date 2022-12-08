#include <LiquidCrystal_I2C.h>
#include </home/youssef/Documents/Arduino_Projects/File2/File1.h>


void setup(void)
{
  LiquidCrystal_I2C Lcd(0x27, 0x10, 0x02);
  Serial.begin(9600);
  Lcd.init();
  Lcd.begin(0x10, 0x02);
  Lcd.setCursor(0x00, 0x00);
  Lcd.backlight();
  uint8_t Pin = 0b0;
  pinMode(Alert_Pin, OUTPUT);
  while (1)
  {
    if (Serial.available() > 0)
    {
      Serial.println(ascii_to_int(Serial.read(), &Lcd));
      delay(2000);
      Lcd.clear();
      Lcd.setCursor(0x00, 0x00);
      Lcd.print("|Give new value|");
      digitalWrite(Alert_Pin, LOW);
    }
  }
}

void loop(){}
