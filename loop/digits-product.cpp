//wap to enter any number and calculate product of its digits.
#include<iostream>
using namespace std;
int main()
{
	int num,rem,product=1;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	while(num>0)
	{
		rem=num%10;
		product=product*rem;
		num=num/10;
	}
	cout<<"Product of the digits of the number : "<<product;
}
