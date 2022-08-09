#include "Cola.h"
#include "Pila.cpp"

template <class T>
Cola<T>::Cola()
{
    inicio=NULL;
}

template <class T>
Nodo<T>* Cola<T>::getInicio(){
    return inicio;
}

template <class T>
void Cola<T>::setInicio(Nodo<T>* i){
    inicio=i;
}

template <class T>
void Cola<T>::encolar(T dato){
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if(!this->estaVacia()){
        Nodo<T>* act=inicio;
        Nodo<T>* ant=NULL;
        while(act!=NULL){
            ant=act;
            act=act->getSig();
        }
        ant->setSig(nuevo);
    }
    else{
        inicio=nuevo;
    }
}

template <class T>
T Cola<T>::desencolar(){
    T dato;
    if(!this->estaVacia()){
        dato=inicio->getInfo();
        inicio=inicio->getSig();
    }
    else{
        cout<<"La Cola Esta Vacia"<<endl;
    }
    return dato;
}

template <class T>
bool Cola<T>::estaVacia(){
    return(inicio==NULL);
}

template <class T>
int Cola<T>::tamCola(){
    Nodo<T>* aux= inicio;
    int tam=0;
    while(aux!=NULL){
        tam++;
        aux=aux->getSig();
    }
    return tam;
}

template <class T>
void Cola<T>::mostrarCola(){
    if(!this->estaVacia()){
        Nodo<T>* aux = inicio;
        while(aux!=NULL){
            aux->print();
            aux=aux->getSig();
        }
    }
    else{
        cout<<"La Cola Esta Vacia"<<endl;
    }
}

template <class T>
Cola<T>::~Cola()
{
    delete inicio;
}
