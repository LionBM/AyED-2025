#ifndef SENSOR_H
#define SENSOR_H

#include <string>

// Declarar una clase Sensor que tenga un nombre (string), valor (flotante) y unidad (string)
// Metodos para mostrar el sensor, cambiar el valor, cambiar el nombre.

class Sensor {
    private:
        std::string nombre;
        float valor;
        std::string unidad;
        
    public:
        Sensor();
        Sensor(std::string nombre, float v, std::string unidad);
        std::string getNombre();
        void setNombre(std::string nombreNuevo);

};

class Sensor2{
    private:
        //Atributos de la clase sensor2
        std::string nombre;
        float valor;
        std:: string unidad;

    public:
    //métodos setter, getter, constructores(default y con parametros)
    Sensor2();
    Sensor2(std::string nombre2, float valor2, std::string unidad2);
    //setter:
    void setNombre(std::string nombreNuevo);
    void setValor2(float valorNuevo);
    void setUnidad2(std::string unidadNuevo);
    //getter:
    std::string getNombre();
    float getValor();
    std::string getUnidad();
    // MÉTODO diferente
    void mostrarDatos();
};

#endif
