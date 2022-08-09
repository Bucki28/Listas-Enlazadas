#ifndef COLA_H
#define COLA_H
#include "Pila.h"

template <class T>
class Cola
{
    private:
        Nodo<T>* inicio;
    public:
        Cola();
        Nodo<T>* getInicio();
        void setInicio(Nodo<T>* i);
        void encolar(T dato);
        T desencolar();
        int tamCola();
        bool estaVacia();
        void mostrarCola();
        virtual ~Cola();
};

#endif // COLA_H
