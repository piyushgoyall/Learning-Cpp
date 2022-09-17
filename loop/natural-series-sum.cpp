//wap to enter any number 'n' and calculate sum of all natural numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the ending value : ";
	cin>>n;
	cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of all natural numbers between 1 to "<<n<<" : "<<sum;
}
