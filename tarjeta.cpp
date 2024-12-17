#include "tarjeta.h"

void Tarjeta::setcvv(int cvvval) {
    cvv = cvvval;
}

int Tarjeta::getcvv() {
    return cvv;
}

std::string Tarjeta::getNombre() {
    return nombre;
}

int Tarjeta::getNum_tarjeta() const{ //cambie agrege const
    return num_tarjeta;
}

int Tarjeta::getVencimiento() {
    return vencimiento;
}

std::string Tarjeta::getTipo() {
    return tipo;
}

Tarjeta::Tarjeta(){

}

Tarjeta::Tarjeta(int cvvv, std::string nombrev, int num_tarjetav, int vencimientov, std::string tipov){
    cvv = cvvv;
    nombre = nombrev;
    num_tarjeta = num_tarjetav;
    vencimiento = vencimientov;
    tipo = tipov;
}

std::string Tarjeta::to_string(){
    return "Nombre del titular: " + (nombre) + 
    "\nNúmero de tarjeta: " + std::to_string(num_tarjeta) + 
    "\nAño de vencimiento: " + std::to_string(vencimiento) + 
    "\nTipo de tarjeta: " + (tipo) + 
    "\ncvv: " + std::to_string(cvv) + "\n";
}