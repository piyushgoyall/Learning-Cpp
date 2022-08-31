//wap to enter temperature in degree celsius and convert it into degree fahrenheit
#include<iostream>
using namespace std;
int main()
{
	float cel, fahren;
	cout<<"Enter the celsius temperature : ";
	cin>>cel;
	cout<<"\n";
	fahren = (9*cel)/5 + 32;
	cout<<"Celsius to fahrenheit temperature : "<<fahren;
}
