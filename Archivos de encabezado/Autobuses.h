#pragma once
#include "Situacion.h"
#include "Economia.h"
#include "Gestion.h"
#include "Emergencia.h"
using namespace System;

public ref class Autobuses {
private:
	int Codigo;
	String^ Placa;
	int CantAsientos;
	int CantPasajeros;
	int Capacidad;
	double X_Autobus;
	double Y_Autobus;
	int DiasEnServicio;
	int Veloc_inst;
	Situacion^ ObjSituacion;
	Economia^ ObjEconomia;
	Gestion^ ObjGestion;
	Emergencia^ ObjEmergencia;

public:
	Autobuses();
	Autobuses(int Codigo, String^ Placa, int CantAsientos, int CantPasajeros, int Capacidad, double X_Autobus, double Y_Autobus, int DiasEnServicio, int Veloc_inst, Situacion^ ObjSituacion, Economia^ ObjEconomia, Gestion^ ObjGestion, Emergencia^ ObjEmergencia;);
};