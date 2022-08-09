#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player{
	int score;
	string name;
	Player *next;
	public:
		Player(string,int);
		Player *getNext();
		void setNext(Player *);
		int getScore();
	
};

#endif
