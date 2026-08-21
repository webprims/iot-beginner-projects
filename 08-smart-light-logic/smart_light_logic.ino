const int LDR_PIN = 34;
const int LED_PIN = 2;
const int DARK_THRESHOLD = 1800;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int lightValue = analogRead(LDR_PIN);
  bool isDark = lightValue < DARK_THRESHOLD;

  digitalWrite(LED_PIN, isDark ? HIGH : LOW);

  Serial.print("Light sensor: ");
  Serial.print(lightValue);
  Serial.print(" | Lamp: ");
  Serial.println(isDark ? "ON" : "OFF");

  delay(500);
}
