#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Subject
{
public:
	void input();
	void output();
	string name;
	int stud_numb;
	int grades[100];
};

int main()
{
	Subject first;
	first.input();
	cout<<"ok"<<endl;
	first.output();

    return 0;
}

void Subject::input()
{
	cout << "Give the name of the lesson"<<endl;
	cin >> name;
	cout << "Give the number of the students who chose the subject " << endl;
	cin >> stud_numb;
	for (int i = 0; i < stud_numb; i++)
	{
		cout << "Give the grade of the " << i<<" student." << endl;
		cin >> grades[i];
	}
}

void Subject::output()
{
	cout <<"The name of the lesson is "<<name<<endl;
	cout << "The number of sudents who chose the subject is " << stud_numb << endl;
	for (int i = 0; i < stud_numb ; i++)
	{
		cout << "The grade of the " << i << " student is " << grades[i] << endl;
	}
}

