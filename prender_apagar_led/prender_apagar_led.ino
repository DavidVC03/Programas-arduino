// Definir el pin del LED
#define LED_PIN 0  // GPIO2 en el ESP-01S




void setup() {
  pinMode(LED_PIN, OUTPUT);  // Configurar el pin del LED como salida
}

void loop() {
  // Encender el LED
  digitalWrite(LED_PIN, HIGH);

  delay(500);

  // Apagar el LED
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
