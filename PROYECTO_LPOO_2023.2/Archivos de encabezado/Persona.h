#pragma once

using namespace System;

public ref class Persona {
	private:
		int		Codigo;
		String^ Nombre;
		String^ ApellidoPat;
		String^ ApellidoMat;
		int		Edad;
		String^ Genero;
		String^ DNI;
		String^ Telefono;

	public:
		Persona();
		Persona(int Codigo, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat, int Edad, String^ Genero, String^ DNI,
				String^ Telefono);
};