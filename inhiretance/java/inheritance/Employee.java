package inheritance;

public class Employee extends Person {
    private int idEmpleado;
    private double sueldo;
    private static int contadorEmpleado;

    public Employee(int idEmpleado, double sueldo, String nombre) {
        super(nombre);
        this.idEmpleado = idEmpleado;
        this.sueldo = sueldo;
    }

    public Employee(int idEmpleado, double sueldo, String nombre, char genero, int edad, String direccion) {
        super(nombre, genero, edad, direccion);
        this.idEmpleado = idEmpleado;
        this.sueldo = sueldo;
    }

    @Override
    public String obtenerDetalles() {
        return "Name: %s, Age: %d ".formatted(this.nombre, this.edad);
    }
    
    
    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Employee{");
        sb.append("idEmpleado=").append(idEmpleado);
        sb.append(", sueldo=").append(sueldo);
        sb.append('}');
        sb.append(", ").append(super.toString());
        // Invoca el método toString() de la clase padre para incluir los atributos heredados.
        sb.append('}');
        return sb.toString();
    }                
}
