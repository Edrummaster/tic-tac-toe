#ifndef __TABLERO_H__
#define __TABLERO_H__
#include "Ficha.h"
#include <iostream>
using namespace std;

class Tablero{
	public:
		char matriz[3][3];
	public:
		Tablero(char strEtq);
		void dibujarse();
		Ficha* obtenerFicha(char etiqueta);
		bool verificarTriquiFilas(int &fila);
		bool verificarTriquiCols(int &col);
		bool verificarTriquiDia(int &diag);
		void asignarSimbolo(char etq, char smb);
};

#endif
