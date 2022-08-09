#include "ColasCirculares.h"

using namespace std;

Cola::Cola(int x) {
    cola = new char(x); // puntero
    inicio, fin, numElements = 0;
    tam = x;
}

Cola::~Cola(){

}

void Cola::encolar(char x) {
    if(numElements < tam){
        cola[fin] = x;
        fin = (fin+1) % tam;
        numElements++;
        cout << cola[fin-1];
    }
}
char Cola::desencolar() {
    if(numElements > 0) {
        char aux = cola[inicio];
        inicio= (inicio+1) % tam;
        numElements--;
        return aux;
    }
}

void Cola::mostrar() {
    for (int i = inicio, x =0; x < numElements;i=(i+1)%tam , x++) {
        cout << cola[i];
    }
    cout << endl;
}

bool Cola::estaVacia() {
    return (numElements == 0);
}

bool Cola::estaLlena() {
    return (numElements>=tam);
}
/*Cola *Cola::pasar(Cola *c1, Cola *c2) {
    while(!this->estaLlena() && !c1->estaVacia()){
        this->encolar(c1->desencolar());
        this->encolar(c2->desencolar());
    }
    
}*/
