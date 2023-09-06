#pragma once

using namespace System;

public ref class DatosPromocionar{
private:
	int Codigo;
	int AntiguedadUsu;
	int ActividadUsu;
	int CantReportes;
	String^ CondicionUsu;

public:
	DatosPromocionar();
	DatosPromocionar(int Codigo, int AntiguedadUsu, int ActividadUsu, int CantReportes, String^ CondicionUsu);
};