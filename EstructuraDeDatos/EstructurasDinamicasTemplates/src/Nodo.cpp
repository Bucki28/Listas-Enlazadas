#include "Nodo.h"

template <class T>
Nodo<T>::Nodo(T dato)
{
    info=dato;
    sig=NULL;
}

template <class T>
void Nodo<T>::setInfo(T dato){
    info=dato;
}

template <class T>
T Nodo<T>::getInfo(){
    return info;
}

template <class T>
Nodo<T>* Nodo<T>::getSig(){
    return sig;
}

template <class T>
void Nodo<T>::setSig(Nodo<T>* s){
    sig=s;
}

template <class T>
void Nodo<T>::print(){
    cout<<info<<endl;
}

template <class T>
Nodo<T>::~Nodo()
{
    delete sig;
}
