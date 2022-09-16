//wap to print all even numbers between 1 to 100.
#include<iostream>
using namespace std;
class print
{
	public:
		void odd_series()
		{
			cout<<"Odd Series : ";
			cout<<"\n";
			cout<<"\n";
			for(int i=1;i<=100;i++)
			{
				if(i%2==1)
				{
					cout<<i;
					cout<<"\t";
				}
			}
		}
};
int main()
{
	print ob;
	ob.odd_series();
}
