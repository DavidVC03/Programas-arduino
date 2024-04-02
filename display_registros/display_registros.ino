int latchPin= 8;
int clockPin = 13;
int dataPin = 12;
int dt = 1000;
int i = 0;

byte numbers[] = {
 //ABCD EFGX
 0b00000010, //0
 0b10011111, //1
 0b00110001, //2
 0b00011001, //3
 0b10011100, //4
 0b01011000, //5
 0b01000000, //6
 0b00011111, //7
 0b00000000, //8
 0b00001000 //9
};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin, LOW);        //ABCDEFGX
  shiftOut(dataPin,clockPin,LSBFIRST, numbers[i]);
  digitalWrite(latchPin, HIGH);
  i++;
  delay(dt);
  if (i > 9){
    i = 0;
  }
  
  
  }
