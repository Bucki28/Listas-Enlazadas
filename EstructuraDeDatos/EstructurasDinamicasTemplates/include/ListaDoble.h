#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "NodoDoble.h"

template <class T>
class ListaDoble
{
    private:
        NodoDoble<T>* cab;
    public:
        ListaDoble();
        NodoDoble<T>* getCab();
        void setCab(NodoDoble<T>* c);
        void ingresar(T dato);
        NodoDoble<T>* extraer(T dato);
        void eliminar(T dato);
        bool estaVacia();
        void mostrarLista();
        virtual ~ListaDoble();
};

#endif // LISTADOBLE_H
