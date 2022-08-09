#include <iostream>
#include "Quiz.h"

using namespace std;

Quiz::Quiz(string question,string answer1,string answer2,string answer3,string answer4,int correct,int value){
	this->question=question;
	this->answer1=answer1;
	this->answer2=answer2;
	this->answer3=answer3;
	this->answer4=answer4;
	this->correct=correct;
	this->value=value;
}

Quiz::~Quiz()
{
}

int Quiz::getScore(){
	return (value*100);
}

void Quiz::print(){
	cout << value << "). ";
	cout << question << endl;
	cout << answer1 << endl;
	cout << answer2 << endl;
	cout << answer3 << endl;
	cout << answer4 << endl;
}
