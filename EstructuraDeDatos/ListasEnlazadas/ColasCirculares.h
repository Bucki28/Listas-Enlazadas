#ifndef COLASCIRCULARES_H
#define COLASCIRCULARES_H

class Cola {
    char *cola;
    int inicio, fin, numElements,tam;
public:
    Cola(int);
    ~Cola();
    void encolar(char);
    char desencolar();
    void mostrar();
    bool estaLlena();
    bool estaVacia();
    Cola *pasar(Cola *, Cola *);

};
#endif

