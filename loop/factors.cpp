//wap to enter any number and print all factors of the number.
#include<iostream>
using namespace std;
int main()
{
	int num,rem;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	cout<<"Factors of the entered number are :   ";
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<"\t";
			cout<<i;
		}
	}
	
}
