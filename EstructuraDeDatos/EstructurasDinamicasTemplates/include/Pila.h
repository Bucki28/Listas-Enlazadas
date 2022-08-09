#ifndef PILA_H
#define PILA_H
#include "Nodo.h"

template<class T>
class Pila
{
    private:
        Nodo<T>* cima;
    public:
        Pila();
        Nodo<T>* getCima();
        void setCima(Nodo<T>* c);
        void apilar(T dato);
        T desapilar();
        bool estaVacia();
        int tamPila();
        void mostrarPila();
        virtual ~Pila();
};

#endif // PILA_H
