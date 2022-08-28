const int LED_PIN = 9;
const int POT_PIN = A0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
}

void loop() {
  // Микроконтроллер выдаст число от 0 до 1023, пропорциональное углу поворота ручки
  int rotation = analogRead(POT_PIN);

  int brightness = rotation / 4;

  analogWrite(LED_PIN, brightness);
}
