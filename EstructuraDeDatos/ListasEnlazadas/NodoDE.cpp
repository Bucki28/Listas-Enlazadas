#include "NodoDE.h"

NodoDE::NodoDE(i info)
{
	next=NULL;
	before=NULL;
	this->info=info;
}

NodoDE::~NodoDE()
{
}
void NodoDE::setBefore(NodoDE *ant){
	before=ant;
}
void NodoDE::setNext(NodoDE *sig){
	next=sig;
}
NodoDE* NodoDE::getNext(){
	return next;
}
NodoDE* NodoDE::getBefore(){
	return before;
}
