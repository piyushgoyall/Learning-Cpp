#include<iostream>
#include<string.h>
using namespace std;
class str
{
	public:
		void print()
		{
			char s[10];
			cout<<"Enter the string : ";
			gets(s);
			cout<<"\n";
			cout<<"Entered string : ";
			puts(s);
		}
};
int main()
{
	str ob;
	ob.print();
}
