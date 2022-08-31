//wap to convert days into years and weeks.
#include<iostream>
using namespace std;
int main()
{
	int days,weeks,years;
	cout<<"Entr the number of days : ";
	cin>>days;
	cout<<"\n";
	weeks=days/7;
	cout<<"Week(s): "<<weeks;
	cout<<"\n";
	cout<<"\n";
	years=days/365;
	cout<<"Year(s) : "<<years;
}

