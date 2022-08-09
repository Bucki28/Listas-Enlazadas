#ifndef MULTILISTA_H
#define MULTILISTA_H
#include "NodoS.h"

template <class T>
class Multilista
{
    private:
        NodoS<T>* cab;
    public:
        NodoS<T>* getCab();
        void setCab(NodoS<T>* c);
        void ingresarS(T dato);
        void ingresar(T dato, T dato1);
        void print();
        NodoS<T>* buscar(T dato);
        void eliminarS(T dato);
        void eliminar(T dato1, T dato2);
        bool estaVaciaS();
        Multilista();
        virtual ~Multilista();
};

#endif // MULTILISTA_H
