#pragma once
#include "Persona.h"
#include "MetodoDePago.h"

using namespace System;
using namespace System::Collections::Generic;

public ref class Usuario : Persona {
	private:
	List<MetodoDePago^>^ objMetodoDePago;
	String^ FechaDeNacimiento;

	public:
	Usuario();
	Usuario(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero,
		String^ DNI, String^ Telefono, List<MetodoDePago^>^ objMetodoDePago, String^ FechaDeNacimiento);
};