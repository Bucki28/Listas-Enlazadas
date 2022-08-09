#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;

template <class T>
class Nodo
{
    private:
        T info;
        Nodo<T>* sig;
    public:
        Nodo(T dato);
        Nodo<T>* getSig();
        void setSig(Nodo<T>* s);
        T getInfo();
        void setInfo(T dato);
        void print();
        virtual ~Nodo();
};

#endif // NODO_H
