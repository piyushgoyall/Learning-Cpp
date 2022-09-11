//Wap to copy all elements from an array to another array.
#include<iostream>
using namespace std;
class array
{
	public:
		void copy()
			{
				int n;
				cout<<"Enter the size of the array : ";
				cin>>n;
				cout<<"\n";
				int a[n],copy[n],pos;
				for(pos=0;pos<n;pos++)
				{
					cout<<"Enter the element for a["<<pos<<"] : ";
					cin>>a[pos];
					copy[pos]=a[pos];
				}
				cout<<"\n";
				for(pos=0;pos<n;pos++)
				{
					cout<<"Element of b["<<pos<<"] : "<<copy[pos];
					cout<<"\n";
				}
			}
};
int main()
{
	array ob;
	ob.copy();
}
