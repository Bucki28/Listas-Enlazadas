#include "ListaCircular.h"
#include "Lista.cpp"

template<class T>
ListaCircular<T>::ListaCircular()
{
    cab=NULL;
}

template<class T>
Nodo<T>* ListaCircular<T>::getCab(){
    return cab;
}

template<class T>
void ListaCircular<T>::setCab(Nodo<T>* c){
    cab=c;
}

template<class T>
void ListaCircular<T>::ingresar(T dato){
    Nodo<T> *nuevo= new Nodo<T>(dato);
	if(this->estaVacia())
	{
		this->setCab(nuevo);
		nuevo->setSig(nuevo);
	}
	else
	{
		Nodo<T> *actual= this->getCab();
		Nodo<T> *ant= NULL;
		while(actual->getSig() !=this->getCab() && actual->getInfo() < dato)
		{
			ant=actual;
			actual=actual->getSig();
		}
		if(dato !=actual->getInfo())
		{
			if(actual->getInfo()<dato)
			{
				nuevo->setSig(actual->getSig());
				actual->setSig(nuevo);
			}
			else
			{
				nuevo->setSig(actual);
				if(ant)
				{
					ant->setSig(nuevo);
				}
				else
				{
					ant=actual;
					actual= actual->getSig();
					while(actual->getSig() !=this->getCab())
					actual=actual->getSig();
					actual->setSig(nuevo);
					this->setCab(nuevo);
				}
			}
		}
		else
		{
			cout<<"	\ndato ya existente :"<<dato<<"\n"<<endl;
		}

	}
}


template<class T>
Nodo<T>* ListaCircular<T>::extraer(T dato){
    if(!this->estaVacia()){
        Nodo<T>* act=cab;
        while(act!=NULL && act->getInfo()!=dato){
            act=act->getSig();
        }
        if(act->getInfo()==dato){
            return act;
        }
        else{
            cout<<"No se encontro el dato"<<endl;
        }
    }
    else{
        cout<<"La lista esta Vacia"<<endl;
    }
}

template<class T>
bool ListaCircular<T>::estaVacia(){
    return(cab==NULL);
}

template<class T>
void ListaCircular<T>::eliminar(T dato){
    if(!this->estaVacia()){
        Nodo<T>* act=cab;
        Nodo<T>* ant=NULL;
        while(act!=NULL && act->getInfo()!=dato){
            ant=act;
            act=act->getSig();
        }
        if(act->getInfo()==dato){
             ant->setSig(act->getSig());
             delete act;
        }
        else{
            cout<<"No se encontro el dato"<<endl;
        }
    }
    else{
        cout<<"La lista esta Vacia"<<endl;
    }
}

template<class T>
void ListaCircular<T>::mostrarLista(){
    if(!this->estaVacia()){
        Nodo<T>*p=cab;
        while(p->getSig()!=cab){
            p->print();
            p=p->getSig();
        }
        p->print();
    }
    else{
        cout<<"La Lista Esta Vacia"<<endl;
    }
}

template<class T>
ListaCircular<T>::~ListaCircular()
{
    if(!this->estaVacia()){
        Nodo<T>* aux=cab;
        cab=cab->getSig();
        while(cab!=NULL){
            delete aux;
            aux=cab;
            cab=cab->getSig();
        }
    }
}
