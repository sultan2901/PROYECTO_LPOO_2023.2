#pragma once
#include "Tarifa.h"
using namespace System;

public ref class Paradero {

	//atributos
	private:
		int codigo;
		String^ Nombre;
		double x_paradero;
		double y_paradero;
		int frecuencia;
		Tarifa^ UnicaTarifa;
	//metodos
	public:
		Paradero();
		Paradero(int codigo, String^ Nombre,  double x_paradero, double y_paradero, int frecuencia, Tarifa^ UnicaTarifa);

};

