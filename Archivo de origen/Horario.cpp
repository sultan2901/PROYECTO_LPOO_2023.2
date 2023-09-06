#include "Horario.h"

Horario::Horario(){
	//Constructor
}

Horario::Horario(int codigo, String^ Start, String^ End, String^ Turno, String^ Empelado, String^ Dia){

	this->codigo = codigo;
	this->Start = Start;
	this->End = End;
	this->Turno = Turno;
	this->Empleado = Empleado;
	this->Dia = Dia;
}

