//wap to print all ASCII character with their values.
#include<iostream>
using namespace std;
int main()
{
	int num;
	for(num=0; num<=255; num++)
	{
		cout<<num<<"\t"<<char(num);
		cout<<"\n";
	}
}
