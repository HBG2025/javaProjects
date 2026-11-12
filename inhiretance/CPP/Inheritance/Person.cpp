#include "Person.h"

using namespace std;

// Constructor que recibe solamente el nombre.
Person::Person(string nombre) {
    this->nombre = nombre;
}

// Constructor que recibe todos los atributos.
Person::Person(string nombre, char genero, int edad, string direccion) {
    this->nombre = nombre;
    this->genero = genero;
    this->edad = edad;
    this->direccion = direccion;
}

// Retorna todos los atributos de la persona.
string Person::obtenerDetalles() {
    return "Nombre: " + nombre
           + ", Genero: " + string(1, genero)
           + ", Edad: " + to_string(edad)
           + ", Direccion: " + direccion;
}
