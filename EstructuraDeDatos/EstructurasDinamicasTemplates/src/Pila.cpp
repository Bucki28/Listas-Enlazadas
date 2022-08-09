#include "Pila.h"
#include "Nodo.cpp"

template<class T>
Pila<T>::Pila()
{
    cima=NULL;
}

template<class T>
Nodo<T>* Pila<T>::getCima(){
    return cima;
}

template<class T>
void Pila<T>::setCima(Nodo<T>* c){
    cima=c;
}

template<class T>
void Pila<T>::apilar(T dato){
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if(!this->estaVacia()){
        nuevo->setSig(cima);
        cima=nuevo;
    }
    else{
        cima=nuevo;
    }
}

template<class T>
T Pila<T>::desapilar(){
    T dato;
    if(!this->estaVacia()){
        dato=cima->getInfo();
        cima=cima->getSig();
    }
    else{
        cout<<"La pila esta vacia"<<endl;
    }
    return dato;
}

template<class T>
bool Pila<T>::estaVacia(){
    return(cima==NULL);
}

template<class T>
int Pila<T>::tamPila(){
    Nodo<T>* aux= this->cima;
    int tam=0;
    while(aux!=NULL){
        tam++;
        aux=aux->getSig();
    }
    return tam;
}

template<class T>
void Pila<T>::mostrarPila(){
    Nodo<T>* m=cima;
    while(m!=NULL){
        m->print();
        m=m->getSig();
    }
}

template<class T>
Pila<T>::~Pila()
{
    delete cima;
}
