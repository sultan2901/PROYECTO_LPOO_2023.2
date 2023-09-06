#pragma once


using namespace System;

public ref class Gestion {
private:

	int codigo;
	String^ nom_ruta;
	int cant_usua_time;
	int cant_usua_ruta;
	int cant_usua_par;
	String^ nom_parada;
	String^ ID_empleado;
	double media_califica;


public:
	Gestion();
	Gestion(int codigo,String^ nom_ruta,int cant_usua_time,int cant_usua_ruta,int cant_usua_par,String^ nom_parada,String^ ID_empleado,double media_califica);
};
