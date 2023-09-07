#include "Paradero.h"

Paradero::Paradero() {
	//Constructor
};

Paradero::Paradero(int codigo, String^ Nombre, double x_paradero, double y_paradero, int frecuencia, double Distancia) {
	this->codigo = codigo;
	this->Nombre = Nombre;
	this->x_paradero = x_paradero;
	this->y_paradero = y_paradero;
	this->frecuencia = frecuencia;
	this->Distancia = Distancia;
};