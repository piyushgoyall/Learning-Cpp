//wap to calculate the area of an equilateral triangle.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float side,area;
	cout<<"Enter the side length of the triangle : ";
	cin>>side;
	cout<<"\n";
	area=(sqrt(3)*pow(side,2))/4;
	cout<<"Area of the equilateral triangle : "<<area;	
}
