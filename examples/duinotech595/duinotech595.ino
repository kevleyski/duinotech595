#include <duinotech595.h>


void setup() {
  // put your setup code here, to run once:
  setPins();
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 256; i++) {
    updateShiftRegister(i);
    delay(1000);
  }
}
