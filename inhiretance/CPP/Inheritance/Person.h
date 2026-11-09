#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {
protected:
    string nombre;
    char genero;
    int edad;
    string direccion;

public:
    Person(string nombre);

    Person(string nombre, char genero, int edad, string direccion);

    virtual string obtenerDetalles();   //En C++, virtual permite que una clase hija redefina un método de la clase padre

    virtual ~Person() = default;
};

#endif
