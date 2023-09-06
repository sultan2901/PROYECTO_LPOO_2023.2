#pragma once

using namespace System;

public ref class Estadistica {
private:
	int codigo;
	double media;
	double moda;
	double mediana;
	double Maximo;
	double Minimo;
	double desvia;


public:
	Estadistica();
	Estadistica(int codigo,double media,double moda,double mediana,double Maximo,double Minimo,double desvia);
};
