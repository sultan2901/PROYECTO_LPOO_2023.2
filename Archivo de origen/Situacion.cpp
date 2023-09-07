#include "Situacion.h"

Situacion::Situacion() {

};

Situacion::Situacion(int Codigo, bool Trafico, bool Mantenimiento, bool Choque, bool ExcVelocidad, int Espacio) {
	this->Codigo = Codigo;
	this->Trafico = Trafico;
	this->Mantenimiento = Mantenimiento;
	this->Choque = Choque;
	this->ExcVelocidad = ExcVelocidad;
	this->Espacio = Espacio;
};