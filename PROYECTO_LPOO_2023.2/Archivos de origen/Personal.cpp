#include "Personal.h"

Personal::Personal() :Persona() {

};

Personal::Personal(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ DNI,
				   String^ Telefono, double Sueldo, String^ IdEmpleado, String^ Cargo, String^ EstadoContrato) :Persona(Codigo,
				   Nombre, ApellidoPat, ApellidoMat, Edad, Genero, DNI, Telefono) {

	this->Sueldo = Sueldo;
	this->IdEmpleado = IdEmpleado;
	this->Cargo = Cargo;
	this->EstadoContrato = EstadoContrato;
};
