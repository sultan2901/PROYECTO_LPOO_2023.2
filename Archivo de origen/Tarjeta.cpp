#include "Tarjeta.h"

Tarjeta::Tarjeta() {

};

Tarjeta::Tarjeta(int Codigo, double Saldo, String^ Identificador, String^ Titular) {
	this->Codigo = Codigo;
	this->Saldo = Saldo;
	this->Identificador = Identificador;
	this->Titular = Titular;
};