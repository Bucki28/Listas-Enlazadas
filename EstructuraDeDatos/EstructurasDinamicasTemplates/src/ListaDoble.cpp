#include "ListaDoble.h"
#include "NodoDoble.cpp"

template<class T>
ListaDoble<T>::ListaDoble()
{
    cab=NULL;
}

template<class T>
NodoDoble<T>* ListaDoble<T>::getCab(){
    return cab;
}

template<class T>
void ListaDoble<T>::setCab(NodoDoble<T>* c){
    cab=c;
}

template<class T>
void ListaDoble<T>::ingresar(T dato){
    NodoDoble<T>* nuevo = new NodoDoble<T>(dato);
    if(!this->estaVacia()){
        NodoDoble<T>* act=cab;
        NodoDoble<T>* aux=NULL;
        while(act->getSig()!=NULL && act->getInfo()<dato){
            act=act->getSig();
        }
        if(act==cab){
            nuevo->setSig(act);
            act->setAnt(nuevo);
            cab=nuevo;
        }
        else{
            if(act->getSig()==NULL){
                if(act->getInfo()<dato){
                    nuevo->setAnt(act);
                    act->setSig(nuevo);
                }
                else{
                    aux=act->getAnt();
                    nuevo->setSig(act);
                    act->setAnt(nuevo);
                    nuevo->setAnt(aux);
                    aux->setSig(nuevo);
                }
            }
            else{
                aux=act->getAnt();
                nuevo->setSig(act);
                act->setAnt(nuevo);
                nuevo->setAnt(aux);
                aux->setSig(nuevo);
            }
        }
    }
    else{
        cab=nuevo;
    }
}

template<class T>
NodoDoble<T>* ListaDoble<T>::extraer(T dato){
    if(!this->estaVacia()){
        NodoDoble<T>* act=cab;
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
bool ListaDoble<T>::estaVacia(){
    return(cab==NULL);
}

template<class T>
void ListaDoble<T>::eliminar(T dato){
    if(!this->estaVacia()){
        NodoDoble<T>* p=cab;
        NodoDoble<T>* q=NULL;
        while(p!=NULL && p->getInfo()!=dato){
            q=p;
            q=p->getSig();
        }
        if(p->getInfo()==dato){
             q->setSig(p->getSig());
             p->getSig()->setAnt(q);
             delete p;
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
void ListaDoble<T>::mostrarLista(){
    if(!this->estaVacia()){
        NodoDoble<T>* aux = cab;
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
ListaDoble<T>::~ListaDoble()
{
    if(!this->estaVacia()){
        NodoDoble<T>* aux=cab;
        cab=cab->getSig();
        while(cab!=NULL){
            delete aux;
            aux=cab;
            cab=cab->getSig();
        }
    }
}

