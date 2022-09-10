//wap to enter two arrays and print their difference in a third array.
#include<iostream>
using namespace std;
class array
{
	public:
		void diff()
		{
			int a[5],b[5],c[5],pos;
			for(pos=0;pos<5;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			for(pos=0;pos<5;pos++)
			{
				cout<<"Element of a["<<pos<<"] : "<<a[pos];
				cout<<"\n";
			}
			cout<<"\n"; 
			for(pos=0;pos<5;pos++)
			{
				cout<<"Enter the element for b["<<pos<<"] : ";
				cin>>b[pos];
			}
			cout<<"\n";
			for(pos=0;pos<5;pos++)
			{
				cout<<"Element of b["<<pos<<"] : "<<b[pos];
				cout<<"\n";
			}
			cout<<"\n";
			for(pos=0;pos<5;pos++)
			{
				c[pos]=a[pos]-b[pos];
				cout<<"Element of c["<<pos<<"] : "<<c[pos];
				cout<<"\n";
			}
		}
};
int main()
{
	array ob;
	ob.diff();
}
