#include "Persona.h"

Persona::Persona() {

};

Persona::Persona(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ DNI,
	String^ Telefono) {

	this->Codigo = Codigo;
	this->Nombre = Nombre;
	this->ApellidoPat = ApellidoPat;
	this->ApellidoMat = ApellidoMat;
	this->Edad = Edad;
	this->Genero = Genero;
	this->DNI = DNI;
	this->Telefono = Telefono;
};