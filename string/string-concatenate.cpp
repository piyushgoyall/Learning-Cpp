//wap to concatenate two strings.
#include<iostream>
#include<string.h>
using namespace std;
class str
{
	public:
		void con()
		{
			char s[100],cat[100];
			cout<<"Enter the first string : ";
			gets(s);
			cout<<"\n";
			cout<<"Enter the second string : ";
			gets(cat);
			cout<<"\n";
			cout<<"Concatenated string : ";
			strcat(s,cat);
			puts(s);
		}
};
int main()
{
	str ob;
	ob.con();
}
