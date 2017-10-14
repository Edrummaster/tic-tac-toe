#ifndef __FICHA_H__
#define __FICHA_H__


class Ficha {
	
	public:
		char simbolo;
		char etiqueta;
		
	public:
		Ficha();
		Ficha(char simbolo, char etiqueta);
		char getSimbolo();	
		void setSimbolo(char simbolo);
		char getEtiqueta();	
		setEtiqueta(char etiqueta);
		dibujarse();
};

#endif
