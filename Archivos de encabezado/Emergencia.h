#pragma once
using namespace System;

public ref class Emergencia {
private:
	bool se�al;
	int codigo;
	char tipo;

public:
	Emergencia();
	Emergencia(bool se�al, int codigo, char tipo);
};
