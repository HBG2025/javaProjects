#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"

using namespace std;

// Employee hereda de la clase Person.
class Employee : public Person {

private:
    int idEmpleado;
    double sueldo;

    static int contadorEmpleado;

public:
    // Constructores.
    Employee(int idEmpleado, double sueldo, string nombre);

    Employee(int idEmpleado, double sueldo, string nombre,
             char genero, int edad, string direccion);

    // Método heredado que se redefine en Employee.
    string obtenerDetalles() override;
};

#endif