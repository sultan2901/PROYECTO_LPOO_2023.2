#pragma once



using namespace System;

public ref class Horario {
private:

	int codigo;
	String^ Start;
	String^ End;
	String^ Turno;
	String^ Id_Empleado;
	String^ Dia;

public:
	Horario();
	Horario(int codigo, String^ Start, String^ End, String^ Turno, String^ Id_Empleado, String^ Dia);
};
