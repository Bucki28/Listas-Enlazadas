#ifndef QUIZ_H
#define QUIZ_H
#include "string"

using namespace std;

class Quiz
{
	string question; 
	string answer1; 
	string answer2; 
	string answer3; 
	string answer4; 
	int correct;
	int value;
	public:
		Quiz(string,string,string,string,string,int,int);
		~Quiz();
		int getScore();
		void print(); 
	protected:
};

#endif
