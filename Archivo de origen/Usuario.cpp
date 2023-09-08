#include "Usuario.h"

Usuario::Usuario() :Persona() {

};

Usuario::Usuario(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefon, String^ Contrasena, String^ FechaNacimiento. double X_Usario, double Y_Usuario, bool Registrado, Tarjeta^ ObjTarjeta, DatosPromocionar^ ObjDatosPromocionar,list<Reportes^>^ ListaReportes) :Persona(Codigo, Nombres, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono,Contrasena) {

	this->FechaNacimiento = FechaNacimiento;
	this->X_Usuario = X_Usuario;
	this->Y_Usuario = Y_Usuario;
	this->Registrado = Registrado;
	this->ObjTarjeta = ObjTarjeta;
	this->ObjDatosPromocionar = ObjDatosPromocionar;
	this->ListaReportes = ListaReportes;
};
