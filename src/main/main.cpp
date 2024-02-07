#include "Arduino.h"
#include "libs/sz.h"

void setup() {  
  Serial.begin(115200);
  delay(500);

  Serial.println("\n=========\nTesting...\n=========\n");
}

void loop() {
  Serial.println("Loop...");
  delay(1000);
}