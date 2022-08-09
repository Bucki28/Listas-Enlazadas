#ifndef CIRLIST_H
#define CIRLIST_H
#include "node.cpp"

class List
{
    Node *head;

public:
    List();
    ~List();
    Node *getHead();
    void setHead(Node *);
    bool isEmpty();
    void insert(int);
    void remove(int);
    void show();
    int count();
};

#endif