#include<iostream>
#include "Tablero.h"
#include "Jugador.h"
#include "Maquina.h"
#include "Persona.h"
#include "Ficha.h"
#include <string.h>

using namespace std;


int main(){
	char etiquetas[10]="abcdefghi";
 	Tablero tbl(etiquetas[10]);

	
	do{
		tbl.dibujarse();
		char et1 = j1.nextJugada(tbl);
		char s1= j1.getSimbolo();
		tbl.asignarSimbolo(s1,et1);
		if(verifyTricky(tbl)== True){
			cout<<"el jugador"<< j1.getNombre<< "gano"<< endl;
			return;
		}while(1<0);
		//movimiento  Maquina 
		//hacer ...H
		bool verifyColumnas( int &colmna);
		bool verifyDiag(int &diagonal) ;*/
		
	return 0;
	
}

