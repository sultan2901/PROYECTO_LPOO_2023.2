#pragma once

using namespace System;

public ref class Tarjeta{
private:
	int Codigo;
	double Saldo;
	String^ Identificador;
	String^ Titular;

public:
	Tarjeta();
	Tarjeta(int Codigo, double Saldo, String^ Identificador, String^ Titular);
};