#define trg 4
#define ech 0
uint16_t duration_us;
float distance;
void setup() {
  Serial.begin(9600);
  pinMode(trg, OUTPUT);
  while(!Serial){;}
  delay(3000);
}

void loop() {
  delay(300);
  
}
