#include "Estadistica.h"

Estadistica::Estadistica() {
	//Constructor
};

Estadistica::Estadistica(int codigo, double media, double moda, double mediana, double Maximo, double Minimo, double desvia, lista<Gestion^>^ ListaGestion) {

	this->codigo = codigo;
	this->media = media;
	this->moda = moda;
	this->mediana = mediana;
	this->Maximo = Maximo;
	this->Minimo = Minimo;
	this->desvia = desvia;
	this->ListaGestion = ListaGestion;
};