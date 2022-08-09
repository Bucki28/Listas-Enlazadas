#include "Multilista.h"
#include "NodoS.cpp"

template <class T>
Multilista<T>::Multilista()
{
    cab=NULL;
}

template <class T>
void Multilista<T>::setCab(NodoS<T>* c){
    cab=c;
}

template <class T>
NodoS<T>* Multilista<T>::getCab(){
    return cab;
}

template <class T>
void Multilista<T>::ingresarS(T dato){
    NodoS<T>* nuevo = new NodoS<T>(dato);
    if(!this->estaVaciaS()){
        NodoS<T>* p=cab;
        NodoS<T>* q=NULL;
        while(p!=NULL && p->getInfo()<dato){
            q=p;
            p=p->getSig();
        }
        if(q==NULL){
            nuevo->setSig(p);
            cab=nuevo;
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
        cab=nuevo;
    }
}

template <class T>
void Multilista<T>::ingresar(T dato1, T dato2){
    if(!this->estaVaciaS()){
        NodoS<T>* act=cab;
        while(act!=NULL && act->getInfo()!=dato1){
            act=act->getSig();
        }
        if(act->getInfo()==dato1){
            act->ingresarN(dato2);
        }
        else{
            cout<<"No se encontro "<<dato1<<endl;
        }
    }
    else{
        this->ingresarS(dato1);
        this->ingresar(dato1,dato2);
    }
}

template <class T>
void Multilista<T>::print(){
    if(!this->estaVaciaS()){
        NodoS<T>* act=cab;
        while(act!=NULL){
            act->print();
            act=act->getSig();
        }
    }
    else{
        cout<<"La Multilista Esta Vacia"<<endl;
    }
}

template <class T>
bool Multilista<T>::estaVaciaS(){
    return (cab==NULL);
}

template <class T>
void Multilista<T>::eliminarS(T dato){
    if(!this->estaVaciaS()){
        NodoS<T>* p=cab;
        NodoS<T>* q=NULL;
        while(p!=NULL && p->getInfo()!= dato){
            q=p;
            p=p->getSig();
        }
        if(p->getInfo()==dato){
            q->setSig(p->getSig());
            delete p;
        }
        else{
            cout<<"No se encontro el "<<dato<<endl;
        }
    }
    else{
        cout<<"La Multilista esta vacia"<<endl;
    }
}

template <class T>
void Multilista<T>::eliminar(T dato1, T dato2){
    if(!this->estaVaciaS()){
        NodoS<T>* act = cab;
        while(act!=NULL && act->getInfo() != dato1){
            act=act->getSig();
        }
        if(act->getInfo()==dato1){
            act->eliminarN(dato2);
        }
        else{
            cout<<"No se encontro "<<dato2<<" en ninguna de las listas pertenecientes a la multilista"<<endl;
        }
    }
    else{
        cout<<"La multilista esta vacia"<<endl;
    }
}

template <class T>
NodoS<T>* Multilista<T>::buscar(T dato){
    if(!this->estaVaciaS()){
        NodoS<T>* act = cab;
        while(act!=NULL && act->getInfo()!=dato){
            act=act->getSig();
        }
        if(act->getInfo==dato){
            return act;
        }
        else{
            cout<<"No se encontro la lista"<<endl;
        }
    }
    else{
        cout<<"La multilista esta vacia"<<endl;
    }
}

template <class T>
Multilista<T>::~Multilista()
{
    //dtor
}
