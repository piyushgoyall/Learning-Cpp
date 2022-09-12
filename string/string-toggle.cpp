//wap to toggle caase of each character of a string.
#include<iostream>
#include<string.h>
using namespace std;
class str
{
	public: 
		void toggle()
		{
			char s[100];
			{
				cout<<"Enter the string : ";
				gets(s);
				cout<<"\n";
				int l=strlen(s);
				cout<<"Toggled string : ";
				for(int i=0;i<l;i++)
				{
					if(s[i]>='A' && s[i]<='Z')
					{
						s[i] = s[i]+32;
					}
					else if(s[i]>='a' && s[i]<='z')
					{
						s[i] = s[i]-32;
					}
				}
				puts(s);
			}
		}
};
int main()
{
	str ob;
	ob.toggle();
}
