#pragma once



using namespace System;

public ref class Monitoreo :Monitoreo {
private:

	int codigo;
	bool trafico;
	bool manteni;
	bool choque;
	bool veloc;
	int espacio;


public:
	Monitoreo();
	Monitoreo(int codigo,bool trafico,bool manteni,bool choque,bool veloc,int espacio);
};