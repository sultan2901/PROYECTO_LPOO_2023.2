#include "MetodoDePago.h"

MetodoDePago::MetodoDePago() {

};

MetodoDePago::MetodoDePago(int Codigo, String^ TitularTarjeta, String^ NumTarjeta, String^ FechaVencimiento, String^ NumCVV_CVC) {
	this->Codigo = Codigo;
	this->TitularTarjeta = TitularTarjeta;
	this->NumTarjeta = NumTarjeta;
	this->FechaVencimiento = FechaVencimiento;
	this->NumCVV_CVC = NumCVV_CVC;
};