//wap to enter any number and find the sum of first and last digit of the number.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	int rem=num%10,r;
	cout<<"Last digit : "<<rem;
	cout<<"\n";
	cout<<"\n";
	while(num>0)
	{
		r=num%10;
		num=num/10;
	}
	cout<<"First digit : "<<r;
	cout<<"\n";
	cout<<"\n";
	int sum=rem+r;
	cout<<"Sum of first and last digit : "<<sum;
}
