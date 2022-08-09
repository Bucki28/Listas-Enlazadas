#ifndef NODODE_H
#define NODODE_H

template <class i>

class NodoDE
{
	i info;	
	Nodo *next;
	Nodo *before;
	public:
		NodoDE(i);
		~NodoDE();
		void setNext(NodoDE *);
		void setBefore(NodoDE *);
		Nodo *getNext();
		Nodo *getBefore();
		void print();
		
	protected:
};

#endif
