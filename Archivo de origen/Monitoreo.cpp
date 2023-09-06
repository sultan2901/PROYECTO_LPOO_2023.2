#include "Monitoreo.h"

Monitoreo::Monitoreo(){
	//Constructor
};

Monitoreo::Monitoreo(int codigo, bool trafico, bool manteni, bool choque, bool veloc, int espacio) {



	this->codigo = codigo;
	this->trafico = trafico;
	this->manteni = manteni;
	this->choque = choque;
	this->veloc = veloc;
	this->esapcio = espacio;

};