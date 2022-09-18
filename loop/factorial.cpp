//wap to enter any number and calculate its factorial.
#include<iostream>
using namespace std;
int main()
{
	int num,product=1;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	for(int i=1;i<=num;i++)
	{
		product = product*i;
	}
	cout<<"Factorial of "<<num<<" : "<<product;
}
