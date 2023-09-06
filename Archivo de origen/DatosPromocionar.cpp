#include "DatosPromocionar.h"

DatosPromocionar::DatosPromocionar() {

};

DatosPromocionar::DatosPromocionar(int Codigo, int AntiguedadUsu, int ActividadUsu, int CantReportes, String^ CondicionUsu) {
	this->Codigo = Codigo;
	this->AntiguedadUsu = AntiguedadUsu;
	this->ActividadUsu = ActividadUsu;
	this->CantReportes = CantReportes;
	this->CondicionUsu = CondicionUsu;
};