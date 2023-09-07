#include "Autobuses.h"

Autobuses::Autobuses() {

};

Autobuses::Autobuses(int Codigo, String^ Placa, int CantAsientos, int CantPasajeros, int Capacidad, double X_Autobus, double Y_Autobus, int DiasEnServicio, int Veloc_inst) {
	this->Codigo = Codigo;
	this->Placa = Placa;
	this->CantAsientos = CantAsientos;
	this->CantPasajeros = CantPasajeros;
	this->Capacidad = Capacidad;
	this->X_Autobus = X_Autobus;
	this->Y_Autobus = Y_Autobus;
	this->DiasEnServicio = DiasEnServicio;
	this->Veloc_inst = Veloc_inst;
};
