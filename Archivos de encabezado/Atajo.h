#pragma once

using namespace System;

public ref class Atajo {
private:
	
	int codigo;
	double x_inicio;
	double y_inicio;
	double x_final;
	double y_final;
	String^ RutaAsociada;
	

public:
	Atajo();
	Atajo(int Codigo, int x_inicio, double y_inicio, double x_final, double y_final, String^ RutaAsociada);
};