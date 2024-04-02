#define LED_PIN 2 // Definir el pin al que está conectado el LED

void setup() {
    pinMode(LED_PIN, OUTPUT); // Configurar el pin del LED como salida
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // Encender el LED
    delay(1000); // Esperar 1 segundo
    digitalWrite(LED_PIN, LOW); // Apagar el LED
    delay(1000); // Esperar 1 segundo
}
