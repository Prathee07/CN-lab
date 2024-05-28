int isFlamePin = 8;
int isFlame = 0;
int delayTime = 1000;

void setup() {
  pinMode(isFlamePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  isFlame = digitalRead(isFlamePin);
  if (isFlame == 1) {
    Serial.println("Fire ");
    delay(delayTime);
  } else {
    Serial.println("NO Fire ");
    delay(delayTime);
  }
}
