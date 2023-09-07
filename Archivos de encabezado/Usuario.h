#pragma once
#include "Persona.h"
#include "Tarjeta.h"
#include "DatosPromocionar.h"
#include "Reportes.h"

using namespace System;

public	ref class Usuario :Persona {
private:
	String^ FechaNacimiento;
	double X_Usuario;
	double Y_Usuario;
	bool Registrado;
	Tarjeta^ ObjTarjeta;
	DatosPromocionar^ ObjDatosPromocionar;
	list<Reportes^>^ ListaReportes;
	
private:
	Usuario();
	Usuario(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefon, String^ FechaNacimiento. double X_Usario, double Y_Usuario, bool Registrado, Tarjeta^ ObjTarjeta, DatosPromocionar^ ObjDatosPromocionar, list<Reportes^>^ ListaReportes);
};