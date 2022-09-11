//Wap to delete an element from an array at specified position.
#include<iostream>
using namespace std;
class array 
{
	public:
		void eliminate()
		{
			int n;
			cout<<"Enter the size of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],b[n-1],pos,x;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			cout<<"Enter the position of the element to be removed : ";
			cin>>x;
			cout<<"\n";
			for(pos=0;pos<n-1;pos++)
			{
				if(pos<x)
				{
					b[pos]=a[pos];
				}
				if(pos>=x)
				{
					b[pos]=a[pos+1];
				}
				cout<<"Element of b["<<pos<<"] : "<<b[pos];
				cout<<"\n";
			}
		}
};
int main()
{
	array ob;
	ob.eliminate();
}
