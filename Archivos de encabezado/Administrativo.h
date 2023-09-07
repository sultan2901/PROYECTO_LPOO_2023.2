#pragma once
#include "Empleado.h"

using namespace System;

public ref class Administrativo :Empleado {
private:
	String^ Cargo;
public:
	Administrativo();
	Administrativo(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono,
		String^ IdEmpleado, String^ EstadoContrato, double Sueldo, String^ Cargo);
};