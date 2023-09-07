#include "Empleado.h"

Empleado::Empleado() :Persona() {

};

Empleado::Empleado(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ IdEmpleado, String^ EstadoContrato, double Sueldo) :Persona(Codigo, Nombres, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono) {

	
	this->IdEmpleado = IdEmpleado;
	this->EstadoContrato = EstadoContrato;
	this->Sueldo = Sueldo;
};