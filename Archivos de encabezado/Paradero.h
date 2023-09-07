	#pragma once

using namespace System;

public ref class Paradero {

	//atributos
	private:
		int codigo;
		String^ Nombre;
		double x_paradero;
		double y_paradero;
		int frecuencia;
		double Distancia;
	//metodos
	public:
		Paradero();
		Paradero(int codigo, String^ Nombre,  double x_paradero, double y_paradero, int frecuencia, double Distancia);

};

