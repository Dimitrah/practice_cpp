

#include "stdafx.h"
#include<iostream>
using namespace std;

struct Money
{
	int dayNumber;
	int adsNumber;
	float adsperClicked;
	float avgfromeachAd;
};

void MoneyperDay(Money money)
{
	cout << "The number of the day is: " << money.dayNumber << endl;
	cout << "The number of the ads is: " << money.adsNumber<<endl;
	cout << "The percedance of ads people clicked is: " << money.adsperClicked<<"%"<<endl;
	cout << "The average income from each click is: " << money.avgfromeachAd<<endl;
	float average;
	average = (0.01*money.adsperClicked)*money.avgfromeachAd*money.adsNumber;
	cout << "The average made for day " << money.dayNumber << " is: " << average << endl;
}

int main()
{
	Money day;
	cout << "Give the day"<<endl;
	cin >> day.dayNumber;
	cout << "Give the number of ads" << endl;
	cin >> day.adsNumber;
	cout << "Give the percentance of ads clicked" << endl;
	cin >> day.adsperClicked;
	cout << "Give  the average income from each ad" << endl;
	cin>>day.avgfromeachAd;
	MoneyperDay(day);


    return 0;
}

