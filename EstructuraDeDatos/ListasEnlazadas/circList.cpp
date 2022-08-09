#include <iostream>
#include "circList.h"

List::List()
{
}

List::~List()
{
}

Node *List::getHead()
{
    return this->head;
}

void List::setHead(Node *head)
{
    this->head = head;
}

bool List::isEmpty()
{
    if (this->getHead())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void List::insert(int element)
{
    Node *newNode = new Node(element);
    if (this->isEmpty())
    {
        this->setHead(newNode);
        newNode->setNext(newNode);
    }
    else
    {
        Node *current = this->getHead();
        Node *before = NULL;
        while (current->getNext() != this->getHead() && current->getValue() < element)
        {
            before = current;
            current = current->getNext();
        }
        if (element != current->getValue())
        {
            if (current->getValue() < element)
            {
                newNode->setNext(current->getNext());
                current->setNext(newNode);
            }
            else
            {
                newNode->setNext(current);
                if (before)
                {
                    before->setNext(newNode);
                }
                else
                {
                    before = current;
                    current = current->getNext();
                    while (current->getNext() != this->getHead())
                        current = current->getNext();
                    current->setNext(newNode);
                    this->setHead(newNode);
                }
            }
        }
        else
        {
            cout << "Value already exists";
        }
    }
}

void List::remove(int element)
{
    if (!isEmpty())
    {
        Node *current = this->getHead();
        Node *before = NULL;
        while (current->getNext() != this->getHead() && current->getValue() != element)
        {
            before = current;
            current = current->getNext();
        }
        if (current->getValue() == element)
        {
            if (before != NULL)
            {
                before->setNext(current->getNext());
                delete current;
            }
            else
            {
                before = current;
                while (current->getNext() != this->getHead())
                {
                    current = current->getNext();
                }
                current->setNext(before->getNext());
                this->setHead(before->getNext());
                delete before;
            }
        }
        else
        {
            cout << "Value not found";
        }
    }
    else
    {
        cout << "The list is empty";
    }
}

void List::show()
{ /*
     Node *aux = this->getHead();
     while (aux->getNext() != this->getHead())
     {
         cout << aux->getValue() << endl;
         aux = aux->getNext();
     }*/
}

int List::count()
{
    int counter = 0;
    Node *aux = this->getHead();
    while (aux->getNext() != this->getHead())
    {
        counter++;
        aux = aux->getNext();
    }

    return counter;
}
/*
insert(char dato)
{
    Nodo *nuevo = new Nodo(dato);
    if (estaVacia())
    {
        setcab(nuevo);
        nuevo->setSig(nuevo);
    }
    else
    {
        Nodo *actual = getCab();
        Nodo *ant = NULL;
        while (actual->getSig() != cab && actual->getInfo < dato)
        {
            ant = actual;
            actual = actual->getSig();
        }
        if (actual->getInfo() != dato)
        {
            if (actual->getInfo() < nuevo->getInfo())
            {
                nuevo->setSig(actual->getSig());
                actual->setSig(nuevo);
            }
            else
            {
                nuevo->setSig(actual);
                if (ant)
                {
                    ant->setSig(nuevo);
                }
                else
                {
                    ant = actual;
                    while (ant->getSig() != cab)
                    {
                        ant = ant->getSig();
                    }
                    ant->setSig(nuevo);
                    setCab(nuevo);
                }
            }
        }
    }
}
*/