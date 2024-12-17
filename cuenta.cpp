#include "cuenta.h"

void Cuenta::setServicio(std::string servicioval){
    servicio = servicioval;
}

void Cuenta::setUsuario(std::string usuarioval){
    usuario = usuarioval;
}

void Cuenta::setContra(std::string contraval) {
    contra = contraval;
}

void Cuenta::setTarjeta(Tarjeta tarjetaval) {
    tarjeta = tarjetaval;
}

std::string Cuenta::getUsuario() {
    return usuario;
}

std::string Cuenta::getContra() {
    return contra;
}

Tarjeta Cuenta::getTarjeta() {
    return tarjeta;
}

Cuenta::Cuenta(){

}

Cuenta::Cuenta(std::string serviciov, std::string usuariov, std::string contrav, Tarjeta tarjetav) {
    servicio = serviciov;
    usuario = usuariov;
    contra = contrav;
    tarjeta = tarjetav;
}

std::string Cuenta::to_string() {
    return "Datos de la cuenta\nNombre del servicio: " + (servicio) + 
    "\nUsuario: " + (usuario) + 
    "\nContra: " + (contra) + "\n"
    "\nDetalles de la tarjeta utilizada:\n" +
    tarjeta.to_string() + "\n";
}
