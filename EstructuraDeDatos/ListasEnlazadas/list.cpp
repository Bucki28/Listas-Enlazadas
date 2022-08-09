#include <iostream>
#include "List.h"

using namespace std;

List::List()
{
    head = NULL;
}

List::~List()
{
    Node *current = this->getHead();
    while (current != NULL)
    {
        this->setHead(current->getNext());
        delete current;
        current = this->getHead();
    }
}

void List::setHead(Node *head)
{
    this->head = head;
}

Node *List::getHead()
{
    return head;
}

bool List::isEmpty()
{
    return (getHead() == NULL);
}

void List::insert(int value)
{
    Node *newNode = new Node(value);
    if (isEmpty())
        setHead(newNode);
    else
    {
        Node *current = getHead(); // currentvalue = 2 && currentaddress = NULL
        Node *last = NULL;         // lastvalue = NULL && lastaddress = NULL
        while (current != NULL && current->getValue() < value)
        {
            last = current;               // lastvalue = 2 && lastaddress = NULL
            current = current->getNext(); // currentvalue = NULL && currentaddress = NULL
        }
        if (!current) // current == NULL
        {
            last->setNext(newNode);
        }
        else if (current->getValue() != value)
        {
            if (!last) // last != NULL
            {
                newNode->setNext(head); // newNodeAddress = head
                this->setHead(newNode); // head = newNode
            }
            else
            {
                newNode->setNext(current);
                last->setNext(newNode);
            }
        }
        else
        {
            cout << "DATO YA EXISTE" << endl;
            delete newNode;
        }
    }
}

void List::extract(int value)
{
    if (!this->isEmpty())
    {
        Node *current = head;
        Node *before = before;
        while (current != NULL && current->getValue() != value)
        {
            before = current;
            current = current->getNext();
        }
        if (current) // if(current != NULL)
        {
            before->setNext(current->getNext());
            delete current;
        }
        else
        {
            cout << "El dato no existe";
        }
    }
    else
    {
        cout << "No hay elementos";
    }
}

void List::copy(List *list)
{
    Node *current = list->getHead();
    while (current != NULL)
    {
        this->insert(current->getValue());
        current = current->getNext();
    }
}

void List::print()
{
    Node *current = getHead();
    while (current != NULL)
    {
        cout << current->getValue() << "   ";
        current = current->getNext();
    }
    cout << endl;
}

bool List::search(int value)
{
    return true;
}

int List::quantity()
{
    return 0;
}
