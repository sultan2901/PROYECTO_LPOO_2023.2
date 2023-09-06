#include "MetodoPagoAuxiliar.h"

MetodoPagoAuxiliar::MetodoPagoAuxiliar() {

};

MetodoPagoAuxiliar::MetodoPagoAuxiliar(int Codigo, String^ TitTarjetaAux, String^ NumTarjetaAux, String^ FVeTarjetaAux, String^ CodTarjetaAux) {
	this->Codigo = Codigo;
	this->TitTarjetaAux = TitTarjetaAux;
	this->NumTarjetaAux = NumTarjetaAux;
	this->FVeTarjetaAux = FVeTarjetaAux;
	this->CodTarjetaAux = CodTarjetaAux;
};