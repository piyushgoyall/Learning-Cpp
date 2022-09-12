//wap to compare two strings.
#include<iostream>
#include<string.h>
using namespace std;
class str 
{
	public:
		void comp()
		{
			char s[100],com[100];
			cout<<"Enter the first string : ";
			gets(s);
			cout<<"\n";
			cout<<"Enter the second string : ";
			gets(com);
			cout<<"\n";
			if(strcmp(s,com)==0)
			{
				cout<<"Strings are equal";
			}
			else
			{
				cout<<"Strings are not equal";
			}
		}
};
int main()
{
	str ob;
	ob.comp();
}
