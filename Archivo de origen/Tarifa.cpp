#include "Tarifa.h"

//Constructor
Tarifa::Tarifa() {

}

Tarifa::Tarifa(char tipo, int codigo, int DistanciaRecorrida) {
	this->tipo = tipo;
	this->codigo = codigo;
	this->DistanciaRecorrida = DistanciaRecorrida;
}

