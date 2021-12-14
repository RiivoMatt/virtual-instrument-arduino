const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int button5 = 6;
const int button6 = 8;
const int button7 = 9;
int out1;
int out2;
int out3;
int out4;
int out5;
int out6;
int out7;

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
  delay(200); 
}
