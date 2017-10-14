#ifndef __JUGADOR_H__
#define __JUGADOR_H__
#include <string.h>
#include "Ficha.h"
#include "Tablero.h"


class Jugador{
	public:
		string nombre;
		char simbolo;
	public:
		Jugador();
		Jugador(string nombre, char simbolo);
		char getSimbolo();
		Ficha* nextJugada(Tablero tbl);
		dibujarse();
};

#endif
