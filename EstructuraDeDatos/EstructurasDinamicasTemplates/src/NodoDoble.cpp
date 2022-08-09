#include "NodoDoble.h"

template <class T>
NodoDoble<T>::NodoDoble(T dato)
{
    info=dato;
    sig=NULL;
    ant=NULL;
}

template <class T>
NodoDoble<T>* NodoDoble<T>::getSig(){
    return sig;
}


template <class T>
NodoDoble<T>* NodoDoble<T>::getAnt(){
    return ant;
}

template <class T>
T NodoDoble<T>::getInfo(){
    return info;
}

template <class T>
void NodoDoble<T>::setSig(NodoDoble<T>* s){
    sig=s;
}

template <class T>
void NodoDoble<T>::setAnt(NodoDoble<T>* a){
    ant=a;
}

template <class T>
void NodoDoble<T>::setInfo(T dato){
    info=dato;
}

template <class T>
void NodoDoble<T>::print(){
    cout<<info<<endl;
}

template <class T>
NodoDoble<T>::~NodoDoble()
{
    delete ant;
    delete sig;
}
