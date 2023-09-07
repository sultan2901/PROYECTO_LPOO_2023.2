#include "Reportes.h"

Reporte::Reporte() {

};

Reporte::Reporte(int Codigo, String^ Fecha, String^ Comentario, String^ Usuario, String^ Hora, char Tipo, String^ Placa) {
	this->Codigo = Codigo;
	this->Fecha = Fecha;
	this->Comentario = Comentario;
	this->Usuario = Usuario;
	this->Hora = Hora;
	this->Tipo = Tipo;
	this->Placa = Placa;
};