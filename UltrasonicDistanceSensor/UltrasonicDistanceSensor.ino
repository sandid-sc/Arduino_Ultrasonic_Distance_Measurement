/*
#include <SRF05.h>
#define trg 3
#define ech 2
SRF05 USS(trg, ech);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial){;}
  delay(1500);
  Serial.println(USS.getSpeedOfSound());
  Serial.println(USS.getCorrectionFactor());
  USS.setModeSingle();
}

void loop() {
  delay(300);
  Serial.println(USS.getCentimeter());
}
*/
