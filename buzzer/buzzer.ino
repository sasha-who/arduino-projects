#define BUZZER_PIN 3
#define LDR_PIN A0

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int light, frequency;
  const int TIMEOUT = 20;

  light = analogRead(LDR_PIN);
  frequency = map(light, 0, 1023, 4000, 0);
  tone(BUZZER_PIN, frequency, TIMEOUT);
}
