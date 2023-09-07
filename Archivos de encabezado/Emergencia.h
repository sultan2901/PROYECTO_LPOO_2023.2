#pragma once
using namespace System;

public ref class Emergencia {
private:
	bool señal;
	int codigo;
	char tipo;

public:
	Emergencia();
	Emergencia(bool señal, int codigo, char tipo);
};
