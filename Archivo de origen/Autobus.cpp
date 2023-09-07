#include "Autobus.h"

Autobus()::Autobus() {

};

Autobus()::Autobus(int Codigo, String^ Placa, int NumAsientos, int NumPasajeros, int NumPasajeros, int Capacidad, double X_Autobus, double Y_Autobus, int DiasEnServicio) {
	this->Codigo = Codigo;
	this->Placa = Placa;
	this->NumAsientos = NumAsientos;
	this->NumPasajeros = NumPasajeros;
	this->Capacidad = Capacidad;
	this->X_Autobus = X_Autobus;
	this->Y_Autobus = Y_Autobus;
	this->DiasEnServicio = DiasEnServicio;
};