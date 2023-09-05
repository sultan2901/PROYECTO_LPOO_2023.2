#include "MetodoDePago.h"

MetodoDePago::MetodoDePago() {

};

MetodoDePago::MetodoDePago(String^ TitularTarjeta, String^ NumTarjeta, String^ FechaVencimiento, String^ NumCVV_CVC) {
	this->TitularTarjeta = TitularTarjeta;
	this->NumTarjeta = NumTarjeta;
	this->FechaVencimiento = FechaVencimiento;
	this->NumCVV_CVC = NumCVV_CVC;
};