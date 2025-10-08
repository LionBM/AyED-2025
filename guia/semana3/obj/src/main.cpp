#include <iostream>
#include "../include/Sensor.h"

using namespace std;

int main() {
    // // Instancia un objeto de la clase Sensor
    // Sensor* s1 = new Sensor("Temp Cocina", 22.6, "C");
    // // s1->nombre = "Temp Cocina";
    // cout << s1->getNombre() << endl;
    // // cout << s1->nombre << endl;
    // return 0;


    //Instanciar un objeto de Sensor2:

    Sensor2 *sen2 = new Sensor2("Temp Cochera", 23.4 ,"C");

    cout << sen2 ->getNombre()<<endl;
    cout << sen2 ->getValor()<<endl;
    cout << sen2 ->getUnidad()<<endl;
    sen2 -> mostrarDatos();
    cout << endl;
    cout << "Seteamos y cambiamos valores: "<<endl;
    
    sen2-> setNombre("Temp Bañera");
    sen2-> setValor2(10.45);
    sen2-> setUnidad2("F"); 
    sen2 -> mostrarDatos();
 
}
