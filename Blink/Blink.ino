
int A = 2; 			//variable A a pin digital 2 (DT en modulo)
int B = 4;  			//variable B a pin digital 4 (CLK en modulo)
int boton =7;

int ANTERIOR = 50;		// almacena valor anterior de la variable POSICION

volatile int POSICION = 50;	// variable POSICION con valor inicial de 50 y definida
				// como global al ser usada en loop e ISR (encoder)
void detener(){
  delay(10000);  
}

void setup() {
  pinMode(A, INPUT);		// A como entrada
  pinMode(B, INPUT);		// B como entrada
  pinMode(boton,INPUT);
  
  Serial.begin(9600);		// incializacion de comunicacion serie a 9600 bps

  attachInterrupt(digitalPinToInterrupt(A), encoder, LOW);// interrupcion sobre pin A con
							  // funcion ISR encoder y modo LOW
  Serial.println("Listo");	// imprime en monitor serial Listo
}


void loop() {
  if (POSICION != ANTERIOR) {	// si el valor de POSICION es distinto de ANTERIOR
    Serial.println(POSICION);	// imprime valor de POSICION
    ANTERIOR = POSICION ;	// asigna a ANTERIOR el valor actualizado de POSICION
  }
}

void encoder()  {

    if (digitalRead(B) == HIGH)			// si B es HIGH, sentido horario
    {
      POSICION++ ;			// incrementa POSICION en 1
    detener();
    }
    else {					// si B es LOW, senti anti horario
      POSICION-- ;				// decrementa POSICION en 1
    detener();
    }

}