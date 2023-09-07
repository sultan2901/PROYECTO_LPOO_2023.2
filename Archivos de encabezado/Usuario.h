#pragma once
#include "Persona.h"
#include "Tarjeta.h"
#include "DatosPromocionar.h"

using namespace System;

public	ref class Usuario :Persona {
private:
	String^ FechaNacimiento;
	double X_Usuario;
	double Y_Usuario;
	Tarjeta^ ObjTarjeta;
	DatosPromocionar^ ObjDatosPromocionar;
	
private:
	Usuario();
	Usuario(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefon, String^ FechaNacimiento. double X_Usario, double Y_Usuario, Tarjeta^ ObjTarjeta, DatosPromocionar^ ObjDatosPromocionar);
};