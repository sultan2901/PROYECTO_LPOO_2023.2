#pragma once

using namespace System;


public ref class Calificacion {
	private:
		int codigo;
		int numero;
		String^ Id_Empleado;
	public:
		Calificacion();
		Calificacion(int  codigo, int numero, String^ Id_Empleado);
	

};
