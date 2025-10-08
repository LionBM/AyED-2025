#include "../include/sensor.h"
#include <iostream>
#include <fstream>
#include <iomanip>


Sensor::Sensor() {
    
}
Sensor::Sensor(std::string nombre, float valor, std::string unidad) {
    this->nombre = nombre;
    this->valor = valor;
    this->unidad = unidad;
}

std::string Sensor::getNombre(){
    return nombre;
}

void Sensor::setNombre(std::string nombreNuevo){
    nombre = nombreNuevo;
}

//El que creé yo:
Sensor2::Sensor2(){}
Sensor2::Sensor2(std::string nombre2, float valor2, std::string unidad2){
    nombre = nombre2;
    valor = valor2;
    unidad = unidad2;
}
void Sensor2:: setNombre(std::string nombreNuevo){
    nombre = nombreNuevo;
}
void Sensor2::setValor2(float valorNuevo){
    valor = valorNuevo;
}
void Sensor2::setUnidad2(std::string unidadNuevo){
    unidad = unidadNuevo;
}

std::string Sensor2::getNombre(){
    return nombre;
};
float Sensor2:: getValor(){
    return valor;
};
std::string Sensor2:: getUnidad(){
    return unidad;
};
void Sensor2 :: mostrarDatos(){
    std:: cout <<"Nombre: "<< getNombre()<<"\n Temperatura:"<< getValor()<< " " << getUnidad()<<std::endl;
};


// private:
//         //Atributos de la clase sensor2
//         std::string nombre;
//         float valor;
//         std:: string unidad;

//     public:
//     //métodos setter, getter, constructores(default y con parametros)
//     Sensor2();
//     Sensor2(std::string nombre2, float valor2, std::string unidad2);
//     //setter:
//     void setNombre(std::string nombreNuevo);
//     void setValor2(float valorNuevo);
//     void setUnidad2(std::string unidadNuevo);
//     //getter:
//     std::string getNombre;
//     float getValor;
//     std::string getUnidad;