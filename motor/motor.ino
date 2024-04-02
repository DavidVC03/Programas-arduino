int IN1 = 11;
int IN2 = 10;
int IN3 = 9;
int IN4 = 8;

void apagar(){

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}

void setup() {
  pinMode(IN1, OUTPUT);		
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  apagar();
}

void loop() {

  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  delay(5000);
  digitalWrite(IN2,LOW);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN3,HIGH);
  delay(5000);
  apagar();
}
