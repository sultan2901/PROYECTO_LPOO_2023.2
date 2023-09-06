#include "Atajo.h"

Atajo::Atajo() :Ruta() {

};

Atajo::Atajo(int num_paraderos, char linea, int codigo, String^ inicio_time, String^ inicio_time, String^ final_time, String^ Zona,
	          int x_inicio, double y_inicio, double x_final, double y_final):Ruta(num_paraderos, linea, codigo, inicio_time,inicio_time, final_time, Zona) {

	
	
	this->x_inicio = x_inicio ;
	this->y_inicio= Yinicio;
	this->x_final= x_final;
	this->y_final= y_final;
};