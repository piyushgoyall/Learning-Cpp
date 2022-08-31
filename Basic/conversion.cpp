//wap to enter the length in centimeter andconvert it into meter and kilometer
#include<iostream>
using namespace std;
int main()
{
	float cm,m,km;
	cout<<"Enter the centimeter value : ";
	cin>>cm;
	cout<<"\n";
	m=cm/100;
	cout<<"Centimeter to meter value : "<<m;
	cout<<"\n";
	cout<<"\n";
	km=cm/100000;
	cout<<"Centimeter to kilometer value : "<<km;
}
