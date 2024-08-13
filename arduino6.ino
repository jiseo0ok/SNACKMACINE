#include <Servo.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(6,7,8,9,10,11);
int wjrdhltjs=12;
int piezo = 13;
int moneystate= 0;
int val ;
const int buttona = 26;
const int buttonb = 27;
const int buttonc = 28;
const int buttond = 29;
const int buttone = 30;

int speed = 127;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int tones1[] = {261,330,392,523};
int tones2[] = {523,392,330,261};
int tones3[] = {392, 440, 494, 523};

void setup() {

pinMode(wjrdhltjs,INPUT);
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Snack Machine!");
lcd.setCursor(0,1);
lcd.print("Insert Money!! ");

pinMode(buttona,INPUT_PULLUP);
pinMode(buttonb,INPUT_PULLUP);
pinMode(buttonc,INPUT_PULLUP);
pinMode(buttond,INPUT_PULLUP);
pinMode(buttone,INPUT_PULLUP);

servo1.attach(2);
servo2.attach(3);
servo3.attach(4);
servo4.attach(5);

}

void loop() {

  val = digitalRead(wjrdhltjs);
if (val == LOW){
for (int i=0; i<4; i++){
  tone(piezo,tones1[i]);
delay(500);}
noTone(piezo);
 moneystate += 100;
 Serial.println(moneystate);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Snack Machine!");
lcd.setCursor(0,1);
lcd.print("Money : ");
lcd.print(moneystate);
  delay(1000);
}
else{

}


if(moneystate>=100){
//버튼들을 작동하면 lcd의 동전 가격이 지불되며
//서보모터가 작동함  
if(digitalRead(buttona) == LOW){
for (int i=0; i<4; i++){
  tone(piezo,tones2[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
lcd.print("Jelly :");
  lcd.print(moneystate);
    
servo1.write(180);
delay(700);
 servo1.write(90);
  
 
  
}
else{}
if(digitalRead(buttonb) == LOW){
for (int i=0; i<4; i++){
  tone(piezo,tones2[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
lcd.print("CHICCHOC :");
  lcd.print(moneystate);
    
servo2.write(180);
delay(700);
 servo2.write(90);
  

  }

else{}
if(digitalRead(buttonc) == LOW){
for (int i=0; i<4; i++){
  tone(piezo,tones2[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
lcd.print("MIZ : ");
  lcd.print(moneystate);
    
servo3.write(180);
 delay(700);
 servo3.write(90);
  
  }
else{}
if(digitalRead(buttond) == LOW){
for (int i=0; i<4; i++){
  tone(piezo,tones2[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
  lcd.print("VIC PIE : ");
  lcd.print(moneystate);
    
servo4.write(180);
 delay(700);
 servo4.write(90);
  
  }
  else{}
  if(digitalRead(buttone) == LOW){

      int a;
  a = random(4);
  if( a==0 ){

for (int i=0; i<4; i++){
  tone(piezo,tones3[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
lcd.print("RANDOM : ");
  lcd.print(moneystate);
    
servo1.write(180);
delay(700);
 servo1.write(90);
  
  }
      if( a==1 ){
for (int i=0; i<4; i++){
  tone(piezo,tones3[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
lcd.print("RANDOM");
  lcd.print(moneystate);
    
servo2.write(180);
delay(700);
 servo2.write(90);
  
}
      if( a==2 ){
for (int i=0; i<4; i++){
  tone(piezo,tones3[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
lcd.print("RANDOM");
  lcd.print(moneystate);
    
servo3.write(180);
delay(700);
 servo3.write(90);
  
}

      if( a==3 ){
for (int i=0; i<4; i++){
  tone(piezo,tones3[i]);
delay(500);}
noTone(piezo);
moneystate -= 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Snack Machine!");
 lcd.setCursor(0,1);
lcd.print("RANDOM");
  lcd.print(moneystate);
    
servo4.write(180);
delay(700);
 servo4.write(90);

}
    }}
  else{}
  
  }
