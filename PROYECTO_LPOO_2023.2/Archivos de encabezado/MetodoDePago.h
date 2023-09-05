#pragma once
using namespace System;

public ref class MetodoDePago {
	private:
		int Codigo;
		String^ TitularTarjeta;
		String^ NumTarjeta;
		String^ FechaVencimiento;
		String^ NumCVV_CVC;

	public:
		MetodoDePago();
		MetodoDePago(int Codigo, String^ TitularTarjeta, String^ NumTarjeta, String^ FechaVencimiento, String^ NumCVV_CVC);
};