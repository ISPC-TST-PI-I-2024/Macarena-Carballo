#include <Arduino.h>

const int pinSensorTemperatura = A0;

void setud() {
    serial.begin(9600);
}

void loop() {
    int ValorSensor = analogRead(pinSensorTemperatura);

    float temperaturaCelsius = (ValorSensor * 5.0 / 1023.0) * 100.0;

    serial.print("temperatura: ");
    serial.print(temperaturaCelsius);
    serial.printIn(" grados celsius");

    delay(1000)

}
 