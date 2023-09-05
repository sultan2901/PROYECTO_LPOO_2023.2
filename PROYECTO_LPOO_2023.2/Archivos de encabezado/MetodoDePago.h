#pragma once
using namespace System;

public ref class MetodoDePago {
	private:
		String^ TitularTarjeta;
		String^ NumTarjeta;
		String^ FechaVencimiento;
		String^ NumCVV_CVC;

	public:
		MetodoDePago();
		MetodoDePago(String^ TitularTarjeta, String^ NumTarjeta, String^ FechaVencimiento, String^ NumCVV_CVC);
};