#include "Usuario.h"

Usuario::Usuario() :Persona() {

};

Usuario::Usuario(int Codigo, String^ Nombres, String^ ApellidoPat, String^ ApellidoMat, String^ DNI, int Edad, String^ Genero, String^ Telefon, String^ FechaNacimiento. double X_Usario, double Y_Usuario, String^ Contrasena, bool Registrado, Tarjeta^ ObjTarjeta, DatosPromocionar^ ObjDatosPromocionar) :Persona(Codigo, Nombres, ApellidoPat, ApellidoMat, DNI, Edad, Genero, Telefono) {

	this->FechaNacimiento = FechaNacimiento;
	this->X_Usuario = X_Usuario;
	this->Y_Usuario = Y_Usuario;
	this->Contrasena = Contrasena;
	this->Registrado = Registrado;
	this->ObjTarjeta = ObjTarjeta;
	this->ObjDatosPromocionar = ObjDatosPromocionar;
};
