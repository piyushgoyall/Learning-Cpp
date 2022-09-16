//wap to print all alphabets from a to z.
#include<iostream>
using namespace std;
class print 
{
	public:
		void series()
		{
			for(char i='a';i<='z';i++)
			{
				cout<<i;
				cout<<"\n";
			}
		}
};
int main()
{
	print ob;
	ob.series();
}

