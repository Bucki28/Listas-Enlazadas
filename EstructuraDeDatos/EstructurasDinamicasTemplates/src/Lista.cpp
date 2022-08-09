#include "Lista.h"
#include "ColaCircular.cpp"

template<class T>
Lista<T>::Lista()
{
    cab=NULL;
}

template<class T>
Nodo<T>* Lista<T>::getCab(){
    return cab;
}

template<class T>
void Lista<T>::setCab(Nodo<T>* c){
    cab=c;
}

template<class T>
void Lista<T>::ingresar(T dato){
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if(!this->estaVacia()){
        Nodo<T>* act=cab;
        Nodo<T>* ant=NULL;
        while(act!=NULL && act->getInfo()<dato){
            ant=act;
            act=act->getSig();
        }
        if(ant==NULL){
            nuevo->setSig(act);
            cab=nuevo;
        }
        else{
            if(act==NULL){
                ant->setSig(nuevo);
            }
            else{
                nuevo->setSig(act);
                ant->setSig(nuevo);
            }
        }
    }
    else{
        cab=nuevo;
    }
}

template<class T>
Nodo<T>* Lista<T>::extraer(T dato){
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
bool Lista<T>::estaVacia(){
    return(cab==NULL);
}

template<class T>
void Lista<T>::eliminar(T dato){
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
void Lista<T>::mostrarLista(){
    if(!this->estaVacia()){
        Nodo<T>* aux = cab;
        while(aux!=NULL){
            aux->print();
            aux=aux->getSig();
        }
    }
    else{
        cout<<"La Lista Esta Vacia"<<endl;
    }
}

template<class T>
Lista<T>::~Lista()
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

