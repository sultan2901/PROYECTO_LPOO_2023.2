#pragma once

using namespace System
using namespace System::Collections::Generic;

public ref class Rutas {
private:
	int Codigo;
	int CantParaderos;
	char Linea;
	String^ HoraInicio;
	String^ HoraFin;
	String^ Zona;
	List<Paraderos^>^ ObjParaderos;

public:
	Rutas();
	Rutas(int Codigo, int CantParaderos, char Linea, String^ HoraInicio, String^ HoraFin, String^ Zona, List<Paraderos^>^ ObjParaderos);
};