//wap to reverse a string.
#include<iostream>
#include<string.h>
using namespace std;
class str
{
	public:
		void rev()
		{
			char s[100];
			cout<<"Enter the string : ";
			gets(s);
			cout<<"\n";
			cout<<"Reversed string : ";
			strrev(s);
			puts(s);
		}
};
int main()
{
	str ob;
	ob.rev();
}
