#include<Servo.h>
Servo servo;

int sudut;
const int pot = A0;
int hasilPot;

void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
  servo.attach(5);
}

void loop() {
  hasilPot = analogRead(pot);
  sudut = map(hasilPot,0,1023,0,180);
  servo.write(sudut);
  Serial.println(hasilPot);
//  delay(100);
  Serial.println(sudut);
  Serial.print("");

}
