//wap to find power of any number using for loop.
#include<iostream>
using namespace std;
int main()
{
	int num,power;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	cout<<"Enter the power : ";
	cin>>power;
	cout<<"\n";
	int product=1;
	for(int i=1;i<=power;i++)
	{
		product=product*num;
	}
	cout<<""<<num<<" ^ "<<power<<" = "<<product;
}
