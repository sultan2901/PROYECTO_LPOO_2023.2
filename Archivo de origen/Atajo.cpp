#include "Atajo.h"

Atajo::Atajo(){

};

Atajo::Atajo(int Codigo, int x_inicio, double y_inicio, double x_final, double y_final, String^ RutaAsociada) {
	this->Codigo = Codigo;
	this->x_inicio = x_inicio;
	this->y_inicio= Yinicio;
	this->x_final= x_final;
	this->y_final= y_final;
	this->RutaAsociada = RutaAsociada;
};