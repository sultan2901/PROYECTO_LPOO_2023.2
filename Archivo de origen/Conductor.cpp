#include "Conductor.h"

Conductor::Conductor() :Empleado() {

};

Conductor::Conductor(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono,
	String^ IdEmpleado, String^ EstadoContrato, double Sueldo, String^ FVeLicencia, String^ TipoLicencia, String^ Turno) :Empleado(Codigo, Nombres, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono, IdEmpleado, EstadoContrato, Sueldo) {

	this->FVeLicencia = FVeLicencia;
	this->TipoLicencia = TipoLicencia;
	this->Turno = Turno;
};