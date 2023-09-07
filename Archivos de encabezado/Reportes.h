#pragma once

using namespace System;

public ref class Reporte {
private:
	int Codigo;
	String^ Fecha;
	String^ Comentario;
	String^ Usuario;
	String^ Hora;
	char Tipo;
	String^ Placa;

private:
	Reporte();
	Reporte(int Codigo, String^ Fecha, String^ Comentario, String^ Usuario, String^ Hora, char Tipo, String^ Placa);
};