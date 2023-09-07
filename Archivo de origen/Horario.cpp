#include "Horario.h"

Horario::Horario() {
	//Constructor
};

Horario::Horario(int codigo, String^ Start, String^ End, String^ Turno, String^ Id_Empleado, String^ Dia) {

	this->codigo = codigo;
	this->Start = Start;
	this->End = End;
	this->Turno = Turno;
	this->Id_Empleado = Id_Empleado;
	this->Dia = Dia;
};

