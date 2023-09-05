#pragma once
#include "Persona.h"

using namespace System;

public ref class Personal :Persona {
	private:
		double Sueldo;
		String^ IdEmpleado;
		String^ Cargo;
		String^ EstadoContrato;

	public:
		Personal();
		Personal(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ DNI,
			     String^ Telefono, double Sueldo, String^ IdEmpleado, String^ Cargo, String^ EstadoContrato);

};
