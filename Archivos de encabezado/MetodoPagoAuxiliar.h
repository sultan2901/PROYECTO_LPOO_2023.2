#pragma once

using namespace System;

public ref class MetodoPagoAuxiliar{

private:
	int Codigo;
	String^ TitTarjetaAux;
	String^ NumTarjetaAux;
	String^ FVeTarjetaAux;
	String^ CodTarjetaAux;

public:
	MetodoPagoAuxiliar();
	MetodoPagoAuxiliar(int Codigo, String^ TitTarjetaAux, String^ NumTarjetaAux, String^ FVeTarjetaAux, String^ CodTarjetaAux);
};