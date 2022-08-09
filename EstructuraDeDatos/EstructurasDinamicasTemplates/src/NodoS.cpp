#include "NodoS.h"
#include "ListaCircular.cpp"

template <class T>
NodoS<T>::NodoS(T dato)
{
    info=dato;
    sig=NULL;
    inicio=NULL;
}

template <class T>
T NodoS<T>::getInfo(){
    return info;
}

template <class T>
NodoS<T>* NodoS<T>::getSig(){
    return sig;
}

template <class T>
Nodo<T>* NodoS<T>::getInicio(){
    return inicio;
}

template <class T>
void NodoS<T>::setInfo(T dato){
    info=dato;
}

template <class T>
void NodoS<T>::setSig(NodoS<T>* s){
    sig=s;
}

template <class T>
void NodoS<T>::setInicio(Nodo<T>* i){
    inicio=i;
}

template <class T>
void NodoS<T>::ingresarN(T dato){
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if(!this->estaVacioN()){
        Nodo<T>* p = inicio;
        Nodo<T>* q = NULL;
        while(p!=NULL && p->getInfo()<dato){
            q=p;
            p=p->getSig();
        }
        if(q==NULL){
            nuevo->setSig(p);
            inicio=nuevo;
        }
        else{
            if(p==NULL){
                q->setSig(nuevo);
            }
            else{
                nuevo->setSig(p);
                q->setSig(nuevo);
            }
        }
    }
    else{
        inicio=nuevo;
    }
}

template <class T>
Nodo<T>* NodoS<T>::extraerN(T dato){
    if(!this->estaVacioN()){
        Nodo<T>* act = inicio;
        while(act!=NULL && act->getInfo()!=dato){
            act=act->getSig();
        }
        if(act->getInfo()==dato){
            return act;
        }
        else{
            cout<<"No se encontro el Dato"<<endl;
        }
    }
    else{
        cout<<"La Lista esta Vacia"<<endl;
    }
}

template <class T>
bool NodoS<T>::estaVacioN(){
    return(inicio==NULL);
}

template <class T>
void NodoS<T>::eliminarN(T dato){
    if(!this->estaVacioN()){
        Nodo<T>* p = inicio;
        Nodo<T>* q = NULL;
        while(p!=NULL && p->getInfo()!=dato){
            q=p;
            p=p->getSig();
        }
        if(p->getInfo()==dato){
            q->setSig(p->getSig());
            delete p;
        }
        else{
            cout<<"No se encontro el Dato"<<endl;
        }
    }
    else{
        cout<<"La Lista esta Vacia"<<endl;
    }
}

template <class T>
void NodoS<T>::print(){
    cout<<endl<<info<<endl;
    if(!this->estaVacioN()){
        Nodo<T>* act=inicio;
        while(act!=NULL){
            act->print();
            act=act->getSig();
        }
    }
    else{
        cout<<"La Lista Esta Vacia"<<endl;
    }
}

template <class T>
NodoS<T>::~NodoS()
{

}
