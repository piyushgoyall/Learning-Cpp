//wap to print sum of all even numbers between 1 to 100.
#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	for(int i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	cout<<"Sum of even numbers between 1 to 100 = "<<sum;
}
