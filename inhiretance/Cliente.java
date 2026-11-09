package inheritance;

import java.util.Date;

public class Cliente extends Person {
    private int idCliente;
    private Date fechaRegsitro;
    private boolean vip;
    private static int contadorCliente;

    public Cliente(int idCliente, Date fechaRegsitro, boolean vip, String nombre) {
        super(nombre);
        this.idCliente = idCliente;
        this.fechaRegsitro = fechaRegsitro;
        this.vip = vip;
    }

    public Cliente(int idCliente, Date fechaRegsitro, boolean vip, String nombre, char genero, int edad, String direccion) {
        super(nombre, genero, edad, direccion);
        this.idCliente = idCliente;
        this.fechaRegsitro = fechaRegsitro;
        this.vip = vip;
    }

    @Override
    public String obtenerDetalles() {
        return super.obtenerDetalles() + "Es VIP: " + this.vip;
    }

    public int getIdCliente() {
        return idCliente;
    }

    public void setIdCliente(int idCliente) {
        this.idCliente = idCliente;
    }

    public Date getFechaRegsitro() {
        return fechaRegsitro;
    }

    public void setFechaRegsitro(Date fechaRegsitro) {
        this.fechaRegsitro = fechaRegsitro;
    }

    public boolean isVip() {
        return vip;
    }

    public void setVip(boolean vip) {
        this.vip = vip;
    }

    public static int getContadorCliente() {
        return contadorCliente;
    }

    public static void setContadorCliente(int contadorCliente) {
        Cliente.contadorCliente = contadorCliente;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Cliente{");
        sb.append("idCliente=").append(idCliente);
        sb.append(", fechaRegsitro=").append(fechaRegsitro);
        sb.append(", vip=").append(vip);
                sb.append(", ").append(super.toString());
        sb.append('}');
        return sb.toString();
    }    
}
