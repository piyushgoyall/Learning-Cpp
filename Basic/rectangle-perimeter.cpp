//wap to enter length and breadth of a rectangle and find its perimeter.
#include<iostream>
using namespace std;
int main()
{
	int length,breadth,peri;
	cout<<"Enter the length of rectangle : ";
	cin>>length;
	cout<<"\n";
	cout<<"Enter the breadth of rectangle : ";
	cin>>breadth;
	cout<<"\n";
	peri=2*(length+breadth);
	cout<<"Perimeter of the rectangle is : "<<peri;
}
