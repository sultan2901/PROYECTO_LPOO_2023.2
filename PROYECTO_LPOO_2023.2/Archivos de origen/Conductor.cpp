#include "Conductor.h"

Conductor::Conductor() :Personal() {

};

Conductor::Conductor(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ DNI,
					 String^ Telefono, double Sueldo, String^ IdEmpleado, String^ Cargo, String^ Estado_Contrato,
					 String^ LicenciaVencimiento, String^ CategoriaLicencia) :Personal(Codigo, Nombre, ApellidoPat, ApellidoMat,
					 Edad, Genero, DNI, Telefono, Sueldo, IdEmpleado, Cargo, Estado_Contrato) {

	this->LicenciaVencimiento = LicenciaVencimiento;
	this->CategoriaLicencia = CategoriaLicencia;
};