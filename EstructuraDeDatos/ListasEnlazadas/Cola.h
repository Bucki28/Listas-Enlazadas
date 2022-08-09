#ifndef COLA_H
#define COLA_H
#include <ostream>
#include "iostream"

using namespace std;

class Cola
{
	char *cola;
	int inicio,fin,numeroEle,tam;
	public:
		Cola(int);
		~Cola();
		void encolar(char);
		char desencolar();
		void mostrar();
		bool estaLleno();
		bool estaVacia();
		int numeroElementos();
		void pasar(Cola *c1, Cola *c2);
	

};

#endif
