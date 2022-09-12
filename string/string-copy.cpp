//wap to copy one string to another string.
#include<iostream>
#include<string.h>
using namespace std;
class str
{
	public:
		void copy()
		{
			char s[100],copy[100];
			cout<<"Enter the string : ";
			gets(s);
			cout<<"\n";
			cout<<"Copied string : ";
			strcpy(copy,s);
			puts(copy);
		}
};
int main()
{
	str ob;
	ob.copy();
}
