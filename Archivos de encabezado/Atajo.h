#pragma once

#include "Ruta.h"

using namespace System;

public ref class Atajo:Ruta {
private:
	
	double x_inicio;
	double y_inicio;
	double x_final;
	double y_final;
	

public:
	Atajo();
	Atajo(int num_paraderos ,char linea , int codigo , String^ inicio_time , String^ inicio_time , String^ final_time , String^ Zona ,
		  int Xinid, double Yinicio , double Xfinal , double Yfinal  );
};