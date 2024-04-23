#include <Arduino.h>
#define led_builtin 4



void setup() {
  // put your setup code here, to run once:
 pinMode(led_builtin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_builtin,HIGH);
  delay(1000);
  digitalWrite(led_builtin,LOW);
  delay(1000);
}