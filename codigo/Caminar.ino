/* Prueba de Motores con control por anchura de pulso (PWM) El siguiente programa es para hacer una prueba del movimiento del robot. Se tiene creado funciones básicas. */

//Alias para pines de control de Motor Derecho
int pwmtoder = 10;
int mtoder = 12;
int pwmvalder = 127;
//Esta variable es la que se modifica para variar la velocidad de giro del motor. Va de 0 a 255, siendo 0 el mínimo y 255 el máximo
//Alias para pines de control de Motor Izquierdo
int pwmtoizq = 11;
int mtoizq = 13;
int pwmvalizq = 127; //Esta variable es la que se modifica para variar la velocidad de giro del motor. Va de 0 a 255, siendo 0 el mínimo y 255 el máximo

//Funciones
void adelante();
void atras();
void giroderecha();
void giroizquierda();
void derecha();
void izquierda();
void detenido();
//Configuración de Módulos y IO
void setup()
{
    pinMode(pwmtoizq, OUTPUT);
    pinMode(mtoizq, OUTPUT);
    pinMode(pwmtoder, OUTPUT);
    pinMode(mtoder, OUTPUT);
    digitalWrite(pwmtoizq, LOW);
    digitalWrite(mtoizq, LOW);
    digitalWrite(pwmtoder, LOW);
    digitalWrite(mtoder, LOW);
    delay(1000);
}
