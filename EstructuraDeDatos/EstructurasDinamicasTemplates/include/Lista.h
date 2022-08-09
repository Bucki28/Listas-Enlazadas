#ifndef LISTA_H
#define LISTA_H
#include "ColaCircular.h"

template<class T>
class Lista
{
    private:
        Nodo<T>* cab;
    public:
        Lista();
        Nodo<T>* getCab();
        void setCab(Nodo<T>* c);
        void ingresar(T dato);
        Nodo<T>* extraer(T dato);
        void eliminar(T dato);
        bool estaVacia();
        void mostrarLista();
        virtual ~Lista();
};

#endif // LISTA_H
