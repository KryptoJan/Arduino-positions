//Automatic Sunblind Controler V1
//Arduino UNO, 8 segments LCD foil 

int pin_13 = 13;
int pin_12 = 12;
int pin_11 = 11;
int pin_10 = 10;
int pin_9 = 9;
int pin_8 = 8;
int pin_7 = 7;
int pin_6 = 6;
//int pin_5 = 5;
//int pin_4 = 4;

void setup()
{
  pinMode(pin_13, OUTPUT);
  pinMode(pin_12, OUTPUT);
  pinMode(pin_11, OUTPUT);
  pinMode(pin_10, OUTPUT);
  pinMode(pin_9, OUTPUT);
  pinMode(pin_8, OUTPUT);
  pinMode(pin_7, OUTPUT);
  pinMode(pin_6, OUTPUT);
  //pinMode(pin_5, OUTPUT);
  //pinMode(pin_4, OUTPUT);
  Serial.begin(9600);     //Set serial baud rate to 9600 bps

}
void loop()
{
  int val;
  val=analogRead(0);      //Read slider value from analog 0
  Serial.println(val,DEC);//Print the value to serial port
  delay(10);

  switch(val)
    {
      case 0 ... 20:
        digitalWrite(pin_13, LOW);
        digitalWrite(pin_12, LOW);
        digitalWrite(pin_11, LOW);
        digitalWrite(pin_10, LOW);
        digitalWrite(pin_9, LOW);
        digitalWrite(pin_8, LOW);
        digitalWrite(pin_7, LOW);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case 42 ... 130:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, LOW);
        digitalWrite(pin_11, LOW);
        digitalWrite(pin_10, LOW);
        digitalWrite(pin_9, LOW);
        digitalWrite(pin_8, LOW);
        digitalWrite(pin_7, LOW);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case 144 ... 274:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, LOW);
        digitalWrite(pin_10, LOW);
        digitalWrite(pin_9, LOW);
        digitalWrite(pin_8, LOW);
        digitalWrite(pin_7, LOW);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case 289 ... 418:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, HIGH);
        digitalWrite(pin_10, LOW);
        digitalWrite(pin_9, LOW);
        digitalWrite(pin_8, LOW);
        digitalWrite(pin_7, LOW);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case 433 ... 562:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, HIGH);
        digitalWrite(pin_10, HIGH);
        digitalWrite(pin_9, LOW);
        digitalWrite(pin_8, LOW);
        digitalWrite(pin_7, LOW);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case 577 ... 676:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, HIGH);
        digitalWrite(pin_10, HIGH);
        digitalWrite(pin_9, HIGH);
        digitalWrite(pin_8, LOW);
        digitalWrite(pin_7, LOW);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case 691 ... 790:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, HIGH);
        digitalWrite(pin_10, HIGH);
        digitalWrite(pin_9, HIGH);
        digitalWrite(pin_8, HIGH);
        digitalWrite(pin_7, LOW);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case 805 ... 880:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, HIGH);
        digitalWrite(pin_10, HIGH);
        digitalWrite(pin_9, HIGH);
        digitalWrite(pin_8, HIGH);
        digitalWrite(pin_7, HIGH);
        digitalWrite(pin_6, LOW);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      case  945 ... 1023:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, HIGH);
        digitalWrite(pin_10, HIGH);
        digitalWrite(pin_9, HIGH);
        digitalWrite(pin_8, HIGH);
        digitalWrite(pin_7, HIGH);
        digitalWrite(pin_6, HIGH);
        //digitalWrite(pin_5, LOW);
        //digitalWrite(pin_4, LOW);
        break;
      /*case 800 ... 899:
        digitalWrite(pin_5, HIGH);
        digitalWrite(pin_4, LOW);
        break;  
       case 900 ... 1023:
        digitalWrite(pin_4, HIGH);
        break;  */
      /*default:
        digitalWrite(pin_13, HIGH);
        digitalWrite(pin_12, HIGH);
        digitalWrite(pin_11, HIGH);
        digitalWrite(pin_10, HIGH);
        digitalWrite(pin_9, HIGH);
        digitalWrite(pin_8, HIGH);
        digitalWrite(pin_7, HIGH);
        digitalWrite(pin_6, HIGH);
       // digitalWrite(pin_5, LOW);
       // digitalWrite(pin_4, LOW);*/
        break;
    }


}