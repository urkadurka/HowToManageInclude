#include <Arduino.h>
#include <HowTo.h>


void setup() {
  // put your setup code here, to run once:
  SetupPaolo(25);
  ui32Paolo =0;
}

void loop() {
  // put your main code here, to run repeatedly:
  ui32Paolo ++;
  if (ui32Paolo>100) ui32Paolo =0;
  delay(100);

}