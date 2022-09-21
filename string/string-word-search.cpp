//wap to enter a string, search a word and print position of all occurreneces of the word.
// P.S : word here could be anything like search for ik or hdj etc in the string.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[1000];
	cout<<"Enter the string : ";
	gets(a);
	cout<<"\n";
	char s[100];
	cout<<"Enter the word to be searched : ";
	gets(s);
	cout<<"\n";
	int l=strlen(a),d=strlen(s),i,j;
	for(i=0;i<l;i++)
	{
		for(j=0;j<d;j++)
		{
			if(a[i+j]!=s[j])
			{
				break;
			}
		}	
		if(j==d)
		{
			cout<<"Element found at position "<<i<<" ";
			cout<<"\n";
		}
	}
}

