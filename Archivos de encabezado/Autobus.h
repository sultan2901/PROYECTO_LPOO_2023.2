#pragma once

using namespace System;

public ref class Autobus {
private:
	int Codigo;
	String^ Placa;
	int NumAsientos;
	int NumPasajeros;
	int Capacidad;
	double X_Autobus;
	double Y_Autobus;
	int DiasEnServicio;

public:
	Autobus();
	Autobus(int Codigo, String^ Placa, int NumAsientos, int NumPasajeros, int NumPasajeros, int Capacidad, double X_Autobus, double Y_Autobus, int DiasEnServicio);
};