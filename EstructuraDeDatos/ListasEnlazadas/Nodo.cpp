#include "Nodo.h"

using namespace std;
	template <class t>
	Nodo::Nodo(t info)
	{
		Nodo::info=info;
		Nodo::next=NULL;
	}
	template <class t>
	Nodo::~Nodo()
	{
	}
	template <class t>
	t Nodo::getInfo(){
		return this->info;
	}
	template <class t>
	Nodo *Nodo::getNext(){
		return next;
	}
	template <class t>
	void Nodo::setInfo(t dato){
		info = dato;
	}
	template <class t>
	void Nodo::setNext(Nodo *sig){
		next=sig;
	}
	template <class t>
	void Nodo::print(){
		cout << info << endl;
	}
