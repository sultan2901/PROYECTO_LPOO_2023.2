#pragma once

using namespace System;

public ref class DatosPromocionar{
private:
	int Codigo;
	int TimeSoftware;
	int TimeActive;
	int CantReportes;
	String^ CondicionUsu;

public:
	DatosPromocionar();
	DatosPromocionar(int Codigo, int TimeSoftware, int TimeActive, int CantReportes, String^ CondicionUsu);
};