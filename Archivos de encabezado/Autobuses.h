#pragma once

using namespace System;

public ref class Autobuses {
private:
	int Codigo;
	String^ Placa;
	int CantAsientos;
	int CantPasajeros;
	int Capacidad;
	double X_Autobus;
	double Y_Autobus;
	int DiasEnServicio;
	int Veloc_inst;

public:
	Autobuses();
	Autobuses(int Codigo, String^ Placa, int CantAsientos, int CantPasajeros, int Capacidad, double X_Autobus, double Y_Autobus, int DiasEnServicio, int Veloc_inst);
};