#include "Multilista.cpp"
#include "ListaDoble.cpp"

int main(){
    Multilista<char>* m1 = new Multilista<char>();
    m1->ingresarS('1');
    m1->ingresar('1','e');
    m1->ingresar('1','i');
    m1->ingresar('1','u');
    m1->ingresar('1','a');
    m1->ingresar('1','o');
    m1->ingresarS('2');
    m1->ingresar('2','c');
    m1->ingresar('2','b');
    m1->ingresar('2','f');
    m1->ingresar('2','d');
    m1->ingresarS('3');
    m1->ingresar('3','x');
    m1->ingresar('3','z');
    m1->ingresar('3','y');
    m1->ingresar('3','w');
    m1->print();
    /*
    ListaDoble<int>* ld = new ListaDoble<int>();
    ld->ingresar(9);
    ld->ingresar(7);
    ld->ingresar(8);
    ld->ingresar(6);
    ld->mostrarLista();
    cout<<endl;
    ListaCircular<char>* lc = new ListaCircular<char>();
    lc->ingresar('i');
    lc->ingresar('f');
    lc->ingresar('n');
    lc->mostrarLista();
    cout<<endl;
    Lista<char>* l = new Lista<char>();
    l->ingresar('c');
    l->ingresar('d');
    l->ingresar('b');
    l->ingresar('e');
    l->ingresar('a');
    l->mostrarLista();
    cout<<endl;
    ColaCircular<string>* cc = new ColaCircular<string>();
    cc->encolar("Hola");
    cc->encolar("mundo");
    cc->desencolar();
    cc->mostrarCola();
    cout<<endl;
    Cola<int>* c = new Cola<int>();
    c->encolar(1);
    c->encolar(2);
    c->encolar(3);
    c->encolar(4);
    c->desencolar();
    c->mostrarCola();
    cout<<endl;
    Pila<int>* p = new Pila<int>();
    p->apilar(2);
    p->apilar(5);
    p->apilar(7);
    p->apilar(9);
    p->apilar(8);
    p->apilar(6);
    p->desapilar();
    p->mostrarPila();*/
	return 0;
}
