typedef unsigned char uint8_t;
typedef enum Bool 
{
  False,
  True
}Bool;
uint8_t Alert_Pin = 0b1001;
uint8_t ascii_to_int(uint8_t Input);
/*----------------------*/

// returns decimal value of ascii value
uint8_t ascii_to_int(uint8_t Input, LiquidCrystal_I2C *Lcd)
{
  uint8_t Output;
  switch(Input)
  {
    case 48:
      return 0;
      break;
    case 49:
      return 1;
      break;
    case 50:
      return 2;
      break;
    case 51:
      return 3;
      break;
    case 52:
      return 4;
      break;
    case 53:
      return 5;
      break;
    case 54:
      return 6;
      break;
    case 55:
      return 7;
      break;
    case 56:
      return 8;
      break;
    case 57:
      return 9;
      break;
    case 10: // if input is LF (ascii n°10 -> no reaction)
      break;
    default:
      digitalWrite(Alert_Pin, HIGH);
      Lcd->clear();
      Lcd->setCursor(0, 0);
      Lcd->print("Invalid Value!");
      Lcd->setCursor(0, 1);
      Lcd->print(Input);
      break;
  }
}




