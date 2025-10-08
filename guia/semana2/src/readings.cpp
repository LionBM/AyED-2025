#include "../include/readings.h"
#include <iostream>
#include <fstream>
#include <new>        // std::nothrow
#include <iomanip>    // std::setprecision

float* crear_arreglo(int size) {
    if (size <= 0) {
        return nullptr;
    }
    return new float[size];
}

void liberar_arreglo(float*& arr) {
    //TODO
    delete[] arr;
    arr = nullptr;
}
// Carga hasta 'size' valores desde archivo de texto en 'arr'.
// Retorna la cantidad de valores leídos correctamente.
int cargar_desde_archivo(const std::string& ruta, float* arr, int size) {
    //TODO
    std::ifstream archivo;
    archivo.open(ruta);

    if(!archivo.is_open()){
        std::cout<<"No se pudo abrir el archivo"<<std::endl;
        return 0;
    }
    else{int leidos = 0;
    float* p = arr;

    while (leidos < size && (archivo >> *p)) {
        p++;       // avanzar al siguiente float
        leidos++;  // contar lectura
    }

    return leidos;}
}



// Guarda 'size' valores de 'arr' en archivo de texto (uno por línea).
// Retorna true si se guardó con éxito, false si hubo error.
bool guardar_en_archivo(const std::string& ruta, const float* arr, int size) {
    // TODO
    std::ofstream archivo;
    archivo.open(ruta);
    if(!archivo.is_open()){
        std::cout << "No se pudo abrir el archivo"<<std::endl;
        return false;
    }
 for (int i = 0; i < size; i++) {
        archivo << *(arr + i) << "\n";
    }

    return true; // <-- importante

}

void imprimir(const float* arr, int size) {
    // TODO
    for(int i=0; i<size; i++){
        std::cout << *(arr+i)<<std::endl;
    }

}
