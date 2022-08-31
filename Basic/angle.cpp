//wap to enter two angles of a triangle and find the third angle.
#include<iostream>
using namespace std;
int main()
{
	float a1,a2,a3;
	cout<<"Enter the first angle : ";
	cin>>a1;
	cout<<"\n";
	cout<<"Enter the second angle : ";
	cin>>a2;
	cout<<"\n";
	if(a1>=0&&a2>=0&&a1+a2<180)
	{
		a3=180-(a1+a2);
		cout<<"Third angle : "<<a3;
	}
	else
	{
		cout<<"Invalid";
	}
}
