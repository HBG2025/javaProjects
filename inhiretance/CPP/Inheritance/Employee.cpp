#include "Employee.h"

using namespace std;

// Constructor que recibe el identificador, sueldo y nombre.
Employee::Employee(int idEmpleado, double sueldo, string nombre)
    : Person(nombre) {

    this->idEmpleado = idEmpleado;
    this->sueldo = sueldo;
}

// Constructor que recibe todos los atributos.
Employee::Employee(int idEmpleado, double sueldo, string nombre,
                   char genero, int edad, string direccion)
    : Person(nombre, genero, edad, direccion) {

    this->idEmpleado = idEmpleado;
    this->sueldo = sueldo;
}

// Retorna los atributos de Person y Employee.
string Employee::obtenerDetalles() {
    return Person::obtenerDetalles()
           + ", ID empleado: " + to_string(idEmpleado)
           + ", Sueldo: " + to_string(sueldo);
}
