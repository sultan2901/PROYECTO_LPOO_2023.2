#include "Gestion.h"

Gestion::Gestion() {
	//Constructor
};

Gestion::Gestion(int codigo, String^ nom_ruta, int cant_usua_time, int cant_usua_ruta,
	int cant_usua_par, String^ nom_parada, String^ ID_empleado, double media_califica) {

	this->codigo = codigo;
	this->nom_ruta = nom_ruta;
	this->cant_usua_time = cant_usua_time;
	this->cant_usua_ruta = cant_usua_ruta;
	this->cant_usua_par = cant_usua_par;
	this->nom_parada = nom_parada;
	this->ID_empleado = ID_empleado;
	this->media_califica = media_califica;

};