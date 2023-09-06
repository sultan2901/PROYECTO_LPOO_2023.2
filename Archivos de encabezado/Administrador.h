#pragma once
#include "Empleado.h"

using namespace System;

public ref class Administrador :Empleado {
private:
	String^ Cargo;
	char Estado;
public:
	Administrador();
	Administrador(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono,
		String^ IdEmpleado, String^ EstadoContrato, double Sueldo, String^ Cargo, char Estado);
};