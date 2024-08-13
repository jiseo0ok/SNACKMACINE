#include <SoftwareSerial.h>
#define BT_RXD 11//10번에연결
#define BT_TXD 10//11번에연결
SoftwareSerial bluetooth(BT_RXD, BT_TXD);
int motor1 = 2;
int motor2 = 3;
int motor3 = 4;
int motor4 = 5;
int motor5 = 6;
int motor6 = 7;
int motor7 = 8;
int motor8 = 9;


void setup() {
  bluetooth.begin(9600);
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(motor1,OUTPUT);
pinMode(motor2,OUTPUT);
pinMode(motor3,OUTPUT);
pinMode(motor4,OUTPUT);
pinMode(motor5,OUTPUT);
pinMode(motor6,OUTPUT);
pinMode(motor7,OUTPUT);
pinMode(motor8,OUTPUT);
}

void loop() {
char val = bluetooth.read(); 
//변수 val을 지정하고 블루투스 에서 받은 값을 저장 
  if (bluetooth.available()) 
  {  // 블루투스에 입력받은 값이있으면 시리얼 모니터에 출력

    Serial.write(Bluetooth.read());
  } 
if(val == 'a') // val 값 a면 조건문 실행
  {
    digitalWrite(motor1,HIGH);
   digitalWrite(motor2,LOW);
   digitalWrite(motor3,LOW);
digitalWrite(motor4,HIGH);
  digitalWrite(motor5,HIGH);
  digitalWrite(motor6,LOW);
   digitalWrite(motor7,LOW);
  digitalWrite(motor8,HIGH);
  }
 if( val == ‘b')   //val 값이 b면 조건문실행
  {
    digitalWrite(motor1,LOW);
  digitalWrite(motor2,LOW);
   digitalWrite(motor3,LOW);
  digitalWrite(motor4,LOW);
  digitalWrite(motor5,LOW);
  digitalWrite(motor6,LOW);
   digitalWrite(motor7,LOW);
  digitalWrite(motor8,LOW);
  }}

  
