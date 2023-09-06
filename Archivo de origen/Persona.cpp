#include "Persona.h"

Persona::Persona() {

};

Persona::Persona(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono) {
	this->Codigo = Codigo;
	this->Nombres = Nombres;
	this->ApellidoPat = ApellidoPat;
	this->DNI = DNI;
	this->Edad = Edad;
	this->Genero = Genero;
	this->Telefono = Telefono;
};