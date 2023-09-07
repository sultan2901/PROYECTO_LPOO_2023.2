#include "Rutas.h"

Rutas::Rutas() {

};

Rutas::Rutas(int Codigo, int CantParaderos, char Linea, String^ HoraInicio, String^ HoraFin, String^ Zona, List<Paraderos^>^ ObjParaderos) {
	this->Codigo = Codigo;
	this->CantParaderos = CantParaderos;
	this->Linea = Linea;
	this->HoraInicio = HoraInicio;
	this->HoraFin = HoraFin;
	this->Zona = Zona;
	this->ObjParaderos = ObjParaderos;
};