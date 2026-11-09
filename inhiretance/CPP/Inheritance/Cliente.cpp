#include "Cliente.h"

using namespace std;

// Constructor que recibe los datos básicos del cliente.
Cliente::Cliente(int idCliente, time_t fechaRegistro,
                 bool vip, string nombre)
    : Person(nombre) {

    this->idCliente = idCliente;
    this->fechaRegistro = fechaRegistro;
    this->vip = vip;
}

// Constructor que recibe todos los atributos.
Cliente::Cliente(int idCliente, time_t fechaRegistro,
                 bool vip, string nombre, char genero,
                 int edad, string direccion)
    : Person(nombre, genero, edad, direccion) {

    this->idCliente = idCliente;
    this->fechaRegistro = fechaRegistro;
    this->vip = vip;
}

// Retorna los detalles del cliente.
string Cliente::obtenerDetalles() {
    return Person::obtenerDetalles()
           + ", Es VIP: " + (vip ? "true" : "false");
}