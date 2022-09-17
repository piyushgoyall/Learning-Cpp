//wap to print table of any number.
#include<iostream>
using namespace std;
int main()
{
	int num,product;
	cout<<"Enter a number : ";
	cin>>num;
	cout<<"\n";
	for(int i=1;i<11;i++)
	{
		product=num*i;
		cout<<""<<num<<" x "<<i<<"  = "<<product;
		cout<<"\n";
	}
}
