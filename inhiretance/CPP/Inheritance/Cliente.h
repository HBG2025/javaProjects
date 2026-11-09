#ifndef CLIENTE_H
#define CLIENTE_H

#include "Person.h"
#include <ctime>

using namespace std;

// Cliente hereda de la clase Person.
class Cliente : public Person {

private:
    int idCliente;
    time_t fechaRegistro;
    bool vip;

    static int contadorCliente;

public:
    // Constructores.
    Cliente(int idCliente, time_t fechaRegistro,
            bool vip, string nombre);

    Cliente(int idCliente, time_t fechaRegistro,
            bool vip, string nombre, char genero,
            int edad, string direccion);

    // Método heredado que se redefine en Cliente.
    string obtenerDetalles() override;
};

#endif