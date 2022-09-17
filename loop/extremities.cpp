//wap to enter any number and find its first and last digit. 
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
	while(num>1)
	{
		r=num%10;
		num=num/10;
	}
	cout<<"First digit : "<<r;
}
