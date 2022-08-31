//wap to enter temperature in degree fahrenheit and convert it into degree celsius
#include<iostream>
using namespace std;
int main()
{
	float cel, fahren;
	cout<<"Enter the fahrenheit temperature : ";
	cin>>fahren;
	cout<<"\n";
	cel = ((fahren-32)*5)/9;
	cout<<"Fahrenheit to Celsius temperature : "<<cel;
}
