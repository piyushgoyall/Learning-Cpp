//wap to find total number of alphabets, digits and special characters in a string.
#include<iostream>
#include<string.h>
using namespace std;
class str
{
	public:
		void count()
		{
			char s[200];
			cout<<"Enter the string : ";
			gets(s);
			cout<<"\n";
			int l = strlen(s),alp=0,dig=0,spl=0;
			for(int i=0;i<l;i++)
			{
				if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z')
				{
					alp=alp+1;
				}
				else if(s[i]>='0' &&s[i]<='9')
				{
					dig=dig+1;
				}
				else
				{
					spl=spl+1;
				}
			}
			cout<<"Total alphabets : "<<alp;
			cout<<"\n";
			cout<<"Total digits : "<<dig;
			cout<<"\n";
			cout<<"Total special characters : "<<spl;
		}
};
int main()
{
	str ob;
	ob.count();
}
