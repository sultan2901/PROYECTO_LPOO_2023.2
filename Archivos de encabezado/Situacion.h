#pragma once

using namespace System;

public ref class Situacion {
private:
	int Codigo;
	bool Trafico;
	bool Mantenimiento;
	bool Choque;
	bool ExcVelocidad;
	int Espacio;

public:
	Situacion();
	Situacion(int Codigo, bool Trafico, bool Mantenimiento, bool Choque, bool ExcVelocidad, int Espacio);
};