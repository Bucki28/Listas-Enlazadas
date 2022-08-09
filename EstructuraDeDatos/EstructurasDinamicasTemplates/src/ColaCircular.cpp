#include "ColaCircular.h"
#include "Cola.cpp"

template<class T>
ColaCircular<T>::ColaCircular()
{
    inicio=NULL;
}

template<class T>
Nodo<T>* ColaCircular<T>::getInicio(){
    return inicio;
}

template<class T>
void ColaCircular<T>::setInicio(Nodo<T>* i){
    inicio=i;
}

template<class T>
void ColaCircular<T>::encolar(T dato){
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if(!this->estaVacia()){
        Nodo<T>* act=inicio;
        while(act->getSig()!=inicio){
            act=act->getSig();
        }
        nuevo->setSig(inicio);
        act->setSig(nuevo);
    }
    else{
        nuevo->setSig(nuevo);
        inicio=nuevo;
    }
}

template<class T>
T ColaCircular<T>::desencolar(){
    T dato;
    if(!this->estaVacia()){
        Nodo<T>* aux=inicio;
        while(aux->getSig()!=inicio){
            aux=aux->getSig();
        }
        dato=inicio->getInfo();
        inicio=inicio->getSig();
        aux->setSig(inicio);
    }
    else{
        cout<<"La Cola Circular Esta Vacia"<<endl;
    }
    return dato;
}

template<class T>
bool ColaCircular<T>::estaVacia(){
    return(inicio==NULL);
}

template <class T>
int ColaCircular<T>::tamCola(){
    int tam=1;
    if(!this->estaVacia()){
        Nodo<T>* aux = inicio;
        while(aux->getSig()!=inicio){
            tam++;
            aux=aux->getSig();
        }
    }
    else{
        tam=0;
    }
    return tam;
}

template <class T>
void ColaCircular<T>::mostrarCola(){
    if(!this->estaVacia()){
        Nodo<T>* aux = inicio;
        while(aux->getSig()!=inicio){
            aux->print();
            aux=aux->getSig();
        }
        aux->print();
    }
    else{
        cout<<"La Cola Esta Vacia"<<endl;
    }
}

template <class T>
ColaCircular<T>::~ColaCircular()
{
    //dtor
}
