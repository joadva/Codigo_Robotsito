// Inicio de programa
void setup()
{
    pinMode(4, INPUT);
    pinMode(5, INPUT);
    pinMode(6, INPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    // iniciar la comunicacion serial en 9600 bits per second:
    Serial.begin(9600);
}
// el lopp se ejecuta una y otra vez BEBE uwu :
void loop()
{
    // leer entrada en el ping 0:
    int sensorValue0 = digitalRead(4);
    int sensorValue1 = digitalRead(5);
    int sensorValue2 = digitalRead(6);
    // imprime el valor leido :
    if (sensorValue0 == HIGH)
    {
        Serial.print("Sensor izquierdo: ");
        Serial.println("libre");
    }
    else
    {
        Serial.print("Sensor izquierdo: ");
        Serial.println("Objeto cercano");
    }
    if (sensorValue1 == HIGH)
    {
        Serial.print("Sensor centro: ");
        Serial.println("libre");
    }
    else
    {
        Serial.print("Sensor centro: ");
        Serial.println("Objeto cercano");
    }
    if (sensorValue2 == HIGH)
    {
        Serial.print("Sensor derecho: ");
        Serial.println("libre");
    }
    else
    {
        Serial.print("Sensor derecho: ");
        Serial.println("objeto cercano");
    }
    delay(1000); // tiempo de estabuilidad :V deal izzi
