#ifndef NODO_H
#define NODO_H
template <class t>
class Nodo
{
	t info;
	Nodo *next;
	public:
		Nodo(t);
		~Nodo();
		void setInfo(t);
		t getInfo();
		void setNext(Nodo *);
		Nodo *getNext();
		void print();
	protected:
};

#endif

