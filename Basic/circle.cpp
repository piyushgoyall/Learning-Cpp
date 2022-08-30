//wap to enter the radius of a circle and find its diameter, circumference, area.
#include<iostream>
using namespace std;
int main()
{
	float radius,dia,area,circum;
	cout<<"Enter the raduius of the circle : ";
	cin>>radius;
	cout<<"\n";
	dia=2*radius;
	cout<<"Diameter of the circle : "<<dia;
	cout<<"\n";
	cout<<"\n";
	circum=(2*22*radius)/7;
	cout<<"Circumference of the circle : "<<circum;
	cout<<"\n";
	cout<<"\n";
	area=(22*radius*radius)/7;
	cout<<"Area of the circle : "<<area;
}
