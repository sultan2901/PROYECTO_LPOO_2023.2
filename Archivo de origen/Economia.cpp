#include "Economia.h"

Economia::Economia() {
	//Cosntructor
}

Economia::Economia (int codigo, double ingresos, double salario, double combustible, double Cost_mant) {



	this->codigo = codigo ;
	this->ingresos = ingresos;
	this->salario= salario;
	this->combustible = combustible;
	this->Cost_mant = Cost_mant;
}