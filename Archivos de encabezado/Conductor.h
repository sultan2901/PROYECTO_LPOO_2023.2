#pragma once
#include "Empleado.h"

using namespace System;

public ref class Conductor :Empleado {
private:
	String^ FVeLicencia;
	String^ TipoLicencia;
	char Estado;

public:
	Conductor();
	Conductor(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono,
		String^ IdEmpleado, String^ EstadoContrato, double Sueldo, String^ FVeLicencia, String^ TipoLicencia, char Estado);
};