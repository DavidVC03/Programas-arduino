void setup() {
    Serial.begin(115200); // Inicializar la comunicación serie a 115200 baudios
}

void loop() {
    Serial.println("Hola desde ESP8266 ESP-01"); // Imprimir mensaje de depuración
    delay(1000); // Esperar 1 segundo
}
