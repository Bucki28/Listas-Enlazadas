#ifndef NODODOBLE_H
#define NODODOBLE_H
#include <iostream>

using namespace std;

template <class T>
class NodoDoble
{
    T info;
    NodoDoble<T>* sig;
    NodoDoble<T>* ant;
    public:
        NodoDoble(T dato);
        NodoDoble<T>* getSig();
        NodoDoble<T>* getAnt();
        T getInfo();
        void setSig(NodoDoble<T>* s);
        void setAnt(NodoDoble<T>* a);
        void setInfo(T dato);
        void print();
        virtual ~NodoDoble();
};

#endif // NODODOBLE_H
