#define TRIGGER_PIN 9
#define DELAY 5

void setup() {
  Serial.begin(57600);

  pinMode(TRIGGER_PIN, OUTPUT);
  digitalWrite(TRIGGER_PIN, LOW);
  pinMode(TRIGGER_PIN, INPUT);
}

void loop() {
  delay(DELAY * 1000);
  Serial.println("Pulsing");
  pinMode(TRIGGER_PIN, OUTPUT);
  delay(1);
  pinMode(TRIGGER_PIN, INPUT);
  Serial.println("Pulsed");
}
