//wap to find the length of a string.
#include<iostream>
#include<string.h>
using namespace std;
class str
{
	public:
		void length()
		{
			char s[100];
			int len;
			cout<<"Enter the string : ";
			gets(s);
			cout<<"\n";
			len = strlen(s);
			cout<<"Length of the entered string : "<<len;
		}
};
int main()
{
	str ob;
	ob.length();
}

