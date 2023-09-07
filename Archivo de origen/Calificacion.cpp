#include "Calificacion.h"

Calificacion::Calificacion() {
	//Constructor
};

Calificacion::Calificacion(int  codigo, int numero, String^ Id_Empleado) {
	this->codigo = codigo;
	this->numero = numero;
	this->Id_Empleado = Id_Empleado;

};

