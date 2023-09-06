#pragma once

using namespace System;

public ref class Economia {
private:
	int codigo;
	double ingresos;
	double salario;
	double combustible;
	double Cost_mant;


public:
	Economia();
	Economia(int codigo,double ingresos,double salario,double combustible,double Cost_mant);
};