//wap to convert lowercase string to uppercase.
#include<iostream>
#include<string.h>
using namespace std;
class str 
{
	public:
		void upp()
		{
			char s[100];
			cout<<"Enter the string : ";
			gets(s);
			cout<<"\n";
			cout<<"Uppercase string : ";
			strupr(s);
			puts(s); 
		}
};
int main()
{
	str ob;
	ob.upp();
}
