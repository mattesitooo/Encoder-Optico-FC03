volatile int contador=0;
int sensor=3;
void setup() {
Serial.begin(9600);
attachInterrupt (1, interrupcion, RISING);
}
void loop() {
}
void interrupcion () {
contador++; 
Serial.println (contador);
}
