#include <iostream>
#include <string>
using namespace std;


struct Alumno {
    string nombre;
    int edad;
    double notaFinal;
};

int main() {
    
    Alumno listaAlumnos[3];

    
    cout << "=== REGISTRO DE ALUMNOS ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nDatos del alumno " << i + 1 << ":" << endl;
        
        cout << "Nombre: ";
        cin >> listaAlumnos[i].nombre; 
        
        cout << "Edad: ";
        cin >> listaAlumnos[i].edad;
        
        cout << "Nota Final: ";
        cin >> listaAlumnos[i].notaFinal;
    }

   
    cout << "\n=== LISTA DE ALUMNOS REGISTRADOS ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Alumno: " << listaAlumnos[i].nombre 
             << " | Edad: " << listaAlumnos[i].edad 
             << " | Nota: " << listaAlumnos[i].notaFinal << endl;
    }

    return 0;
}
