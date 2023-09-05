#pragma once
#include "Personal.h"

using namespace System;

public ref class Conductor :Personal {
	private:
		String^ LicenciaVencimiento;
		String^ CategoriaLicencia;
	public:
		Conductor();
		Conductor(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ DNI,
				  String^ Telefono, double Sueldo, String^ IdEmpleado, String^ Cargo, String^ Estado_Contrato, String^ LicenciaVencimiento,
				  String^ CategoriaLicencia);
};