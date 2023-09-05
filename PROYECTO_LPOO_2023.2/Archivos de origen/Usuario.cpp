#include"Usuario.h"

Usuario::Usuario() :Persona() {

};

Usuario::Usuario(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ DNI,
				 String^ Telefono, List<MetodoDePago^>^ objMetodoDePago, String^ FechaDeNacimiento) :Persona(Codigo, Nombre,
				 ApellidoPat, ApellidoMat, Edad, Genero, DNI, Telefono) {

	this->objMetodoDePago = objMetodoDePago;
	this->FechaDeNacimiento = FechaDeNacimiento;
};