#define SOIL_PIN 34      // Potentiometer signal
#define RELAY_PIN 18     // Relay input
#define LED_PIN 19       // LED indicator

const int threshold = 2000;   // Moisture threshold

void setup() {

  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Automatic Irrigation System");
}

void loop() {

  int moisture = analogRead(SOIL_PIN);

  Serial.print("Soil Moisture Value: ");
  Serial.println(moisture);

  if (moisture < threshold) {

    Serial.println("Status : SOIL DRY");
    Serial.println("Pump   : ON");

    digitalWrite(RELAY_PIN, HIGH);
    digitalWrite(LED_PIN, HIGH);

  }
  else {

    Serial.println("Status : SOIL WET");
    Serial.println("Pump   : OFF");

    digitalWrite(RELAY_PIN, LOW);
    digitalWrite(LED_PIN, LOW);

  }

  Serial.println("--------------------------");

  delay(2000);
}