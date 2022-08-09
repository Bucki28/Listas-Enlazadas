#include "Record.h"

Record::Record()
{
	primer=NULL;
}

Record::~Record()
{
}
void Record::insert(string name,int score){
	Player *p1 = new Player(name,score);
    if (isEmpty())
        setHead(p1);
    else
    {
        Player *current = getHead();
        Player *last = NULL;        
        while (current != NULL && current->getValue() > value)
        {
            last = current;               // lastvalue = 2 && lastaddress = NULL
            current = current->getNext(); // currentvalue = NULL && currentaddress = NULL
        }
        if (!current) // current == NULL
        {
            last->setNext(p1);
        }
        else if (current->getValue() != value)
        {
            if (!last) // last != NULL
            {
                p1->setNext(head); // newNodeAddress = head
                this->setHead(p1); // head = p1
            }
            else
            {
                p1->setNext(current);
                last->setNext(p1);
            }
        }
        else
        {
            cout << "DATO YA EXISTE" << endl;
            delete p1;
        }
    }
}

bool Record::isEmpty(){
	return (head==NULL);
}

void Record::print(){
	Player *current=head;
	while(!current){
		cout << current->getName();
		cout << current->getScore();
		current=current->getNext();
	}
	
}
