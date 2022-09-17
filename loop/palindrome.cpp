//wap to enter any number and check whether the number is palindrome or not.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	int n=num;
	int rev=0,rem;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==n)
	{
		cout<<"The entered number a is palindrome number";
	}
	else
	{
		cout<<"The entered number a is not palindrome number";
	}
}
