#include "Tarifa.h"

//Constructor
Tarifa::Tarifa() {

};

Tarifa::Tarifa(char tipo, int codigo, ^ String^ ParaderoInicio, String^ ParaderoFin) {
	this->tipo = tipo;
	this->codigo = codigo;
	this->ParaderoInicio = ParaderoInicio;
	this->ParaderoFin = ParaderoFin;
};

