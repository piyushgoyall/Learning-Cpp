//wap to convert uppercase string to lowercase.
#include<iostream>
#include<string.h>
using namespace std;
class str 
{
	public:
		void low()
		{
			char s[100];
			cout<<"Enter the string : ";
			gets(s);
			cout<<"\n";
			cout<<"Lowercase string : ";
			strlwr(s);
			puts(s); 
		}
};
int main()
{
	str ob;
	ob.low();
}
