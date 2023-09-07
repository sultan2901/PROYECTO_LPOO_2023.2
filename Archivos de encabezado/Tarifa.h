#pragma once

using namespace System;

public ref class Tarifa {
	//Atributos
	private:
		char tipo;
		int codigo;
		String^ ParaderoInicio;
		String^ ParaderoFin;
	//metodos	
	public:
		Tarifa();
		Tarifa(char tipo , int codigo , ^String^ ParaderoInicio, String^ ParaderoFin);

};