#include <iostream>
#include <ctime>

#include "/home/h/poo/inheritance/Heredando/Inheritance/Person.h"
#include "/home/h/poo/inheritance/Heredando/Inheritance/Employee.h"
#include "/home/h/poo/inheritance/Heredando/Inheritance/Cliente.h"

using namespace std;

int main() {

    // Crear dos objetos de la clase Employee.
    Employee employee1(1, 3000, "Alex", 'M', 32, "Facatativa");
    Employee employee2(2, 3450, "Alicia", 'F', 41, "Madrid");

    cout << employee1.obtenerDetalles() << endl;
    cout << employee2.obtenerDetalles() << endl;

    // Obtener la fecha actual.
    time_t fecha = time(nullptr);

    // Crear dos objetos de la clase Cliente.
    Cliente cliente1(1, fecha, true, "HBG", 'M', 46, "Bogota");
    Cliente cliente2(2, fecha, false, "Carla", 'F', 43, "Cota");

    cout << cliente1.obtenerDetalles() << endl;
    cout << cliente2.obtenerDetalles() << endl;

    // Crear un objeto de la clase Person.
    Person persona1("Fabio", 'M', 25, "Madrid");

    cout << persona1.obtenerDetalles() << endl;

    return 0;
}
