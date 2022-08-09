#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "Node.h"

class List
{
    Node *head;
    void setHead(Node *);

public:
    List();
    virtual ~List();
    Node *getHead();
    void insert(int);
    void extract(int);
    bool isEmpty();
    void copy(List *);
    void print();
    bool search(int);
    int quantity();
};

#endif
