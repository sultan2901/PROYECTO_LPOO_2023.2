#include "Administrativo.h"

Administrativo::Administrativo() :Empleado() {

};

Administrativo::Administrativo(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena, String^ IdEmpleado, String^ EstadoContrato, double Sueldo, String^ Cargo) :Empleado(Codigo, Nombres, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, Contrasena, IdEmpleado, EstadoContrato, Sueldo) {

	this->Cargo = Cargo;
};