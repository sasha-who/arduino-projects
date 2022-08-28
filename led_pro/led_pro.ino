const int LED_PIN = 9;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 250; i++){
    analogWrite(LED_PIN, i);
    delay(13);
  }

  for (int i = 250; i >= 0; i--){
    analogWrite(LED_PIN, i);
    delay(13);
  }
}
