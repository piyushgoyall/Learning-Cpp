//wap to enter any number and print its reverse.
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
	cout<<"Reverse of "<<n<<" : "<<rev;
}
