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

// Retorna los detalles del empleado.
string Employee::obtenerDetalles() {
    return "Name: " + nombre + ", Age: " + to_string(edad);
}