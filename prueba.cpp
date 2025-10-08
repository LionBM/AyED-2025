#include <iostream>
#include <iomanip>

using namespace std;

// -----------------------------------------------------------------------------
// (C) Paso por puntero: swap y variaciones
// Implementar aquí para usarlas más abajo.
// -----------------------------------------------------------------------------
void swap_por_puntero(int* a, int* b) {
    // TODO: implementar intercambio clásico usando *a, *b y una variable temporal.
    int aux;
    aux = *b;
    *b = *a;
    *a = aux; 
}

void swap_si_mayor(int* p, int* q) {
    // TODO: intercambiar solo si *p > *q.
    if (*p > *q){
        int aux = *q;
        *q = *p;
        *p = aux;
        };
 }

void swap_si_menor(int* p, int* q) {
    // TODO (opcional): intercambiar solo si *p < *q.
    if(*p < *q){
        int aux = *p;
        *p = *q;
        *q = aux;
}

    }

void set_si_positivo(int* p, int valor) {
    // TODO (opcional): escribir 'valor' en *p solo si valor > 0.
    if(valor > 0){
        *p = valor;
        cout << "El valor es " << *p <<endl;
    }
    else
        cout << "El valor no es positivo" << endl; 

}

// -----------------------------------------------------------------------------
// (D) Funciones que procesan arreglos pasados por puntero
// -----------------------------------------------------------------------------
int suma(const int* arr, int n) {
    // TODO: recorrer arr[0..n-1] y acumular.
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+= *(arr + i);
    }
    return sum;
}

double promedio(const int* arr, int n) {
    // TODO: usar suma(...) y devolver (double)suma/n si n>0; si n==0 retornar 0.0.
        int sum = suma(arr, n);
        if(n>0) {
            double prom = (double)sum/n;
            return prom;}
        else { return 0.0; }
            
}

int maximo(const int* arr, int n) {
     //TODO (opcional): devolver el mayor valor del arreglo (validar n>0).
    int mayor = *arr;
     if(n>0){
        for(int i=0; i<n-1; i++){
            if(mayor<*(arr + i + 1)){
                mayor = *(arr + i + 1);
            }
        }
        return mayor;
    }
    else cout << "N es menor a 0, no valido"<<endl;
  
     return 0;
}

int main() {
    //cout << fixed << setprecision(2);
    cout <<"Que onda"<<endl;
    // -------------------------------------------------------------------------
    // (A) Variables y direcciones (calentamiento)
    // -------------------------------------------------------------------------
    // TODO:
    // 1) Declarar: int a=5; float f=3.14f; char c='Z';
    int a = 5;
    float f = 3.14;
    char c = 'Z'; 
        
    // 2) Imprimir valor y dirección:
        cout << "a = " << a <<" "<< &a << endl;
        cout << "f = " << f <<" "<< &f << endl;
        cout << "c = " << c <<" "<< &c << endl; 
        cout << "c=" << c << "  &c=" << static_cast<const void*>(&c) << "\n";
        // tener cuidado con las direcciones de tipos como char
        
        
        
    //    cout << "a=" << a << "  &a=" << &a << "\n";
    //    cout << "f=" << f << "  &f=" << &f << "\n";
    //    Para 'c' usar:
    //    cout << "c=" << c << "  &c=" << static_cast<const void*>(&c) << "\n";
    // 3) Escribir en comentarios 2-3 observaciones sobre el patrón de direcciones.

    // -------------------------------------------------------------------------
    // (B) Proyecto CasaDomotica++ - Parte 1: Sensor de temperatura por puntero
    // -------------------------------------------------------------------------


    // El "sensor" será una variable 'temperaturaActual' y un puntero a ella.
    // TODO:
    // 1) Declarar: int temperaturaActual = 22;
    // 2) Declarar: int* ptrTemp = &temperaturaActual;
    // 3) Mostrar equivalencia: *ptrTemp y temperaturaActual.
    // 4) Modificar el valor a través del puntero: *ptrTemp = 27; y verificar.
    // 5) Leer una nueva temperatura desde consola y asignarla vía *ptrTemp.
    
    int temperaturaActual = 22;
    int* ptrTemp = &temperaturaActual;
    cout << "Temperatura actual es " <<temperaturaActual << " y su direccion es " 
    << &temperaturaActual << "." << endl << "El puntero vale " << *ptrTemp << 
    " y su direccion es "  << ptrTemp <<endl;
    
    *ptrTemp = 27;
    cout << "Ahora la temperatura actual es " <<temperaturaActual << endl;
    



    int temp;
    cin >> temp;
    *ptrTemp = temp;
    cout << "Ahora la temperatura actual es " <<temperaturaActual << endl;
   
    int x=5, y=9; 
    cout << "x es: " << x << " e y es: " << y << endl;    
    swap_por_puntero (&x,&y);
    cout << "El puntero ha swapeado  " << x << " / " << y <<endl; 
    
    
    // 2) Implementar swap_si_mayor y probar casos (p.ej., 10 y 3, luego 2 y 7).
       // swap_si_mayor(10,3);
    int aa,be,ce,d,e;
    aa = 10;
    be = 5;
    ce = 6;
    d = 11;
    e = 0;
    cout <<"swap si es mayor:"<< endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl; 
    swap_si_mayor(&aa,&be);
    cout << "a y b" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl; 
    cout<<endl;
    swap_si_mayor(&be,&ce);
    cout << "b y c" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl;
    swap_si_mayor(&d,&e);
    cout << "d y e" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl;
    swap_si_mayor(&aa,&e);
    cout << "a y e" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl;
    swap_si_mayor(&ce,&d);
    cout << "c y d" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl;
    cout<<endl;

    cout <<"swap si es menor:"<< endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl; 
    swap_si_menor(&aa,&be);
    cout << "a y b" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl; 
    cout<<endl;
    swap_si_menor(&be,&ce);
    cout << "b y c" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl;
    swap_si_menor(&ce,&d);
    cout << "c y d" <<endl;
    cout << "a: " << aa<< " b: " << be << " c: " << ce << " d: " << d << " e: " << e << endl;
    cout<<endl;
 // 3) (Opcional) swap_si_menor y set_si_positivo.
    int Edad;
    cout << "Escriba la edad: ";
    cin >> Edad;
    int *pEdad = new int;   
    set_si_positivo(pEdad, Edad);
    delete pEdad;
    

    // -------------------------------------------------------------------------   
    // (D) Arreglos estáticos: direcciones y funciones con punteros
    // -------------------------------------------------------------------------
    
    // 1) Declarar un arreglo fijo: int v[5] = {10,20,30,40,50};

    int v[5] = {10,20,30,40,50};
    for(int i = 0; i < 5; i++ ){
        cout << "valor en " << i << " : " << v[i] << endl;
        cout << "dirección en " << i << " : " << (void*)(&v[i]) << endl;
        cout << endl;
    };

    // 1) Declarar un arreglo fijo: int v[5] = {10,20,30,40,50};
    // 2) Imprimir v[i] y &v[i] en un for (i=0..4) para observar contigüidad.
    //    Sugerencia de línea para dirección:
    //    cout << (void*)(&v[i]) << "\n";
    // 3) Llamar a suma(v,5), promedio(v,5) y (opcional) maximo(v,5) e imprimir.
    //    // TODO: completar implementaciones arriba.

    cout << suma(v,5)<<endl;
    cout << fixed << promedio(v,5)<<endl;
    cout << maximo(v,5)<<endl;



    cout << "Fin Semana 1. Próximo paso: memoria dinámica y archivos (Semana 2).";
    cout << "Presiona ENTER para salir...";
    cin.ignore();
    cin.get();
    return 0;
}
