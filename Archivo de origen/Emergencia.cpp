#include "Emergencia.h"

Emergencia::Emergencia() {
	//Constructor
}

Emergencia::Emergencia(bool señal, int codigo, char tipo) {
	this->señal = señal;
	this->codigo = codigo;
	this->tipo = tipo;
}