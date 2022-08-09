#ifndef COLACIRCULAR_H
#define COLACIRCULAR_H
#include "Cola.h"

template<class T>
class ColaCircular
{
    private:
        Nodo<T>* inicio;
    public:
        ColaCircular();
        Nodo<T>* getInicio();
        void setInicio(Nodo<T>* i);
        void encolar(T dato);
        T desencolar();
        int tamCola();
        bool estaVacia();
        void mostrarCola();
        virtual ~ColaCircular();
};

#endif // COLACIRCULAR_H
