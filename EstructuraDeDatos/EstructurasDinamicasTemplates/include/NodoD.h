#ifndef NODOD_H
#define NODOD_H
#include "ListaDoble.h"

template <class T>
class NodoD
{
    private:
        T* info;
        NodoDoble<T>* inicio;
        NodoD<T>* sig;
    public:
        NodoD(T* dato);
        T* getInfo();
        NodoDoble<T>* getInicio();
        NodoD<T>* getSig();
        void setInfo(T* dato);
        void setInicio(NodoDoble<T>* i);
        void setSig(NodoD<T>* s);
        void print();
        virtual ~NodoD();
};

#endif // NODOD_H
