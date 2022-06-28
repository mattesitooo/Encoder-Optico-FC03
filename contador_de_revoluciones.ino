#include <LiquidCrystal_I2C.h>  
//librerias del Display LCD con interfaz i2c
LiquidCrystal_I2C lcd(0x3f,16,2);   
volatile int contador=0;        
//valor inicial del contador
int sensor=3;                   
//pin de arduino para la comunicacion del sensor
void setup() {
  lcd.begin (16, 2);
  lcd.init();
  lcd.backlight();
  lcd.clear();
attachInterrupt (1, interrupcion, RISING);
//metodo de muestreo de interrupciones
}
void loop() {
}
void interrupcion () {
contador++;                      
//cada vez q se detecte una interrupcion el contador aumenta en 1
lcd.setCursor(0,0);
lcd.print("  REVOLUCIONES");
lcd.setCursor(0,1);
lcd.print(contador);            
//imprime en el display LCD las revoluciones totales medidas
}
