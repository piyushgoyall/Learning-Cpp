//wap to enter any number and calculate sum of its digits.
#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	cout<<"Sum of the digits of the number : "<<sum;
}
