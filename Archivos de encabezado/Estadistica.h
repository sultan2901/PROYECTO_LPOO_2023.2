#pragma once
#include"Gestion.h"
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
	lista<Gestion^>^ ListaGestion;


public:
	Estadistica();
	Estadistica(int codigo,double media,double moda,double mediana,double Maximo,double Minimo,double desvia, lista<Gestion^>^ ListaGestion);
};
