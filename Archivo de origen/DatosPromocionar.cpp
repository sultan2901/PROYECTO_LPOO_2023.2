#include "DatosPromocionar.h"

DatosPromocionar::DatosPromocionar() {

};

DatosPromocionar::DatosPromocionar(int Codigo, int TimeSoftware, int TimeActive, int CantReportes, String^ CondicionUsu) {
	this->Codigo = Codigo;
	this->TimeSoftware = TimeSoftware;
	this->TimeActive = TimeActive;
	this->CantReportes = CantReportes;
	this->CondicionUsu = CondicionUsu;
};