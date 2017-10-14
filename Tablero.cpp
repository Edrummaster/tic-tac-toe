//#include <iostream>
#include "Tablero.h"
//using namespace std;

Tablero::Tablero(char strEtq){
	for (int i=0; i < 3; i++){
		for (int j=0; j < 3; j++) {
			Tablero:: matriz[i][j]= strEtq[i];
			
		}
	}
}




void Tablero::dibujarse(){
	for (int i=0; i < 3; i++){
		for (int j=0; j < 3; j++) {
			cout<<"  "<<matriz[i][j];
		cout<<endl;
		}
	}
}
			

Ficha* obtenerFicha(char etiqueta){
	
}

bool Tablero::verificarTriquiFilas(int &fila){
	for (int i=0; i < 3; i++) 
		for (int j=0; j < 3; j++) {
			if (matriz[i][j].getSimbolo() == matriz[i][j+1].getSimbolo() && matriz[i][j].getSimbolo() == matriz [i][j+2].getSimbolo()) {
				fila= i;
				return  fila;
			}
		}
	return NULL;
}


	
bool Tablero::verificarTriquiCols(int &col){
	for (int i=0; i < 3; i++) 
		for (int j=0; j < 3; j++) {
			if (matriz[i][j].getSimbolo() == matriz[i][j+1].getSimbolo() && matriz[i][j].getSimbolo() == matriz [i][j+2].getSimbolo()) {
				col= j;
				return  col;
			}
		}
	return NULL;
	
}
		
		
bool Tablero::verificarTriquiDia(int &diag){
	
}


void Tablero::asignarSimbolo(char etq, char smb){
	
}


