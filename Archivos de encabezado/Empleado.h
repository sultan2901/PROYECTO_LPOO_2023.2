#pragma once
#include "Persona.h"

using namespace System;

public ref class Empleado:Persona{
private:
	
	String^ IdEmpleado;
	String^ EstadoContrato;
	double Sueldo;

public:
	Empleado();
	Empleado(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefono, String^ Contrasena,String^ IdEmpleado, String^ EstadoContrato, double Sueldo);
};