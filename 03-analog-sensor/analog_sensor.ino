const int SENSOR_PIN = 34;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int rawValue = analogRead(SENSOR_PIN);
  float percent = (rawValue / 4095.0) * 100.0;

  Serial.print("Raw: ");
  Serial.print(rawValue);
  Serial.print(" | Approx %: ");
  Serial.println(percent, 1);

  delay(500);
}
