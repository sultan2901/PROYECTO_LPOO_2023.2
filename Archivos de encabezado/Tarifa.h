#pragma once

using namespace System;

public ref class Tarifa {
	//Atributos
	private:
		char tipo;
		int codigo;
		int DistanciaRecorrida;
	//metodos	
	public:
		Tarifa();
		Tarifa(char tipo , int codigo , int DistanciaRecorrida);

};