const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int button5 = 6;
const int button6 = 8;
const int button7 = 9;
const int button8 = 10;

int out1;
int out2;
int out3;
int out4;
int out5;
int out6;
int out7;
int out8;

void setup() {
  // put your setup code here, to run once:
pinMode(button1,INPUT);
pinMode(button2,INPUT);
pinMode(button3,INPUT);
pinMode(button4,INPUT);
pinMode(button5,INPUT);
pinMode(button6,INPUT);
pinMode(button7,INPUT);
Serial.begin(9600);

}

void loop() {
    // put your main code here, to run repeatedly:
  out1 = digitalRead(button1);
  if(out1 == HIGH){
    Serial.println("0");
  }
 out2 = digitalRead(button2);
  if(out2 == HIGH){
    Serial.println("1");
  }
  out3 = digitalRead(button3);
  if(out3 == HIGH){
    Serial.println("2");
  }
  out4 = digitalRead(button4);
  if(out4 == HIGH){
    Serial.println("3");
  }
  out5 = digitalRead(button5);
  if(out5 == HIGH){
    Serial.println("4");
  }
  out6 = digitalRead(button6);
  if(out6 == HIGH){
    Serial.println("5");
  }
  out7 = digitalRead(button7);
  if(out7 == HIGH){
    Serial.println("6");
  }
  out8 = digitalRead(button8);
  if(out8 == HIGH){
    Serial.println("0");
    delay(600);
    Serial.println("1");
    delay(600);
    Serial.println("2");
    delay(600);
    Serial.println("3");
    delay(1000);
    delay(1000);
    Serial.println("1");
    delay(600);
    Serial.println("6");
    delay(600);
    Serial.println("5");
    delay(600);
    Serial.println("5");
    delay(1000);
    delay(100);
    Serial.println("4");
  }
  out7 = (out7 == HIGH) and (out6 == HIGH) and (out5 == HIGH);
  if(out7 == HIGH){
    Serial.println("9,3,5,3");
  }
  delay(200); 

}
