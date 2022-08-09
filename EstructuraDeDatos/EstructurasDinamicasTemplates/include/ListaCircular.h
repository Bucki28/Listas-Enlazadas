#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include "Lista.h"

template <class T>
class ListaCircular
{
    private:
        Nodo<T>* cab;
    public:
        ListaCircular();
        Nodo<T>* getCab();
        void setCab(Nodo<T>* c);
        void ingresar(T dato);
        Nodo<T>* extraer(T dato);
        void eliminar(T dato);
        bool estaVacia();
        void mostrarLista();
        virtual ~ListaCircular();
};

#endif // LISTACIRCULAR_H
