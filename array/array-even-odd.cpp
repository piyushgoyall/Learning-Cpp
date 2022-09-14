//wap to put even and odd elements of array in two separate arrays.
#include<iostream>
using namespace std;
class array
{
	public:
		void even_odd()
		{
			int n;
			cout<<"Enter the size of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos,b[n],c[n];
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			cout<<"Even elements : ";
			for(pos=0;pos<n;pos++)
			{
				if(a[pos]%2==0)
				{
					b[pos]=a[pos];
					cout<<b[pos];
					cout<<"\t";
				}
			}
			cout<<"\n";
			cout<<"\n";
			cout<<"Odd elements : ";
			for(pos=0;pos<n;pos++)
			{
				if(a[pos]%2==1)
				{
					c[pos]=a[pos];
					cout<<c[pos];
					cout<<"\t";
				}
			}
		}
};
int main()
{
	array ob;
	ob.even_odd();
}
