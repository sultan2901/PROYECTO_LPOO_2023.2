#include "Administrador.h"

Administrador::Administrador() :Empleado() {

};

Administrador::Administrador(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono,
	String^ IdEmpleado, String^ EstadoContrato, double Sueldo, String^ RutaAsoc) :Empleado(Codigo, Nombres, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, IdEmpleado, EstadoContrato, Sueldo) {

	this->RutaAsoc = RutaAsoc;
};