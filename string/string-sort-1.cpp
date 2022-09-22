//wap to enter names till the user wants then sort them in ascending or descending order as per user.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int limit;
	cout<<"How many names do you want to enter : ";
	cin>>limit;
	cout<<"\n";
	char a[limit][100];
	cout<<"Enter "<<limit<<" names : ";
	for(int i=0;i<limit;i++)
	{
		cin>>a[i];
	}
	cout<<"\n";
	char temp[limit];
	for(int i=0;i<limit-1;i++)
	{
		for(int j=i+1;j<limit;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	cout<<"\n";
	int ans=0;
	cout<<"For ascending use 1 and for descending use 0";
	cout<<"\n";
	cout<<"\n";
	cout<<"How do you want to sort the array : ";
	cin>>ans;
	cout<<"\n";
	if(ans==1)
	{
		for(int i=0;i<limit;i++)
		{
			cout<<a[i];
			cout<<"\n";
		}
	}
	if(ans==0)
	{
		for(int i=limit-1;i>=0;i--)
		{
			cout<<a[i];
			cout<<"\n";
		}
	}
	
}
