#include "Cola.h"
#include "iostream"
#include "conio.h"
#include "stdlib.h" //new y delete

using namespace std;

Cola::Cola(int tama)
{
	cola=new char[tama];
	inicio=fin=numeroEle=tam=0;
	tam=tama;
}

Cola::~Cola()
{
	delete cola;
}
void Cola::encolar(char dato){
	if(!estaLleno()){
		cola[fin]=dato;
		fin++;
		numeroEle ++;
	}
		else{ 
		cout <<"cola esta llena. El dato: " <<dato
		<<" no puede ser ingresado\n \n";
	}
}
bool Cola::estaLleno()
{
	return(numeroEle==tam);
}
char Cola::desencolar(){
	if(!estaVacia()){
		char aux=cola[inicio];
		numeroEle --;
		
		for(int i=0; i<numeroEle;i++)
		{
			cola[i]=cola[i+1];
		}
		fin--; 
		return aux;
	}	else{ 
	cout <<"cola esta vacia. Por favor ingresar dato  \n \n ";
	}
}
bool Cola::estaVacia()
{
	return(numeroEle==0);	
}
void Cola::mostrar()
{
	for (int i=0; i<numeroEle; i++)
	{
		cout<<cola[i]<<" ";	
	}
}
void Cola::pasar(Cola *c1, Cola *c2){
while(!this->estaLleno()){
        this->encolar(c1->desencolar());
        this->encolar(c2->desencolar());
    }
}


