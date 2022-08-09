#ifndef NODOS_H
#define NODOS_H
#include "ListaCircular.h"

template<class T>
class NodoS
{   private:
        T info;
        NodoS<T>* sig;
        Nodo<T>* inicio;
    public:
        NodoS(T dato);
        NodoS<T>* getSig();
        Nodo<T>* getInicio();
        T getInfo();
        void setSig(NodoS<T>* s);
        void setInicio(Nodo<T>* i);
        void setInfo(T info);
        void ingresarN(T dato);
        Nodo<T>* extraerN(T dato);
        void eliminarN(T dato);
        bool estaVacioN();
        void print();
        virtual ~NodoS();
};

#endif // NODOS_H
