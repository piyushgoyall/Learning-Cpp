//wap to merge two arrays to third a array.
#include<iostream>
using namespace std;
class array
{
	public:
		void merge_array()
		{
			int n,m;
			cout<<"Enter the size of the first array : ";
			cin>>n;
			cout<<"\n";
			cout<<"Enter the size of the second array : ";
			cin>>m;
			cout<<"\n";
			int a[n],b[m],c[m+n],pos;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			cout<<"Elements of first array : ";
			for(pos=0;pos<n;pos++)
			{
				cout<<a[pos];
				cout<<"\t";
			}
			cout<<"\n";
			cout<<"\n";
			for(pos=0;pos<m;pos++)
			{
				cout<<"Enter the element for b["<<pos<<"] : ";
				cin>>b[pos];
			}
			cout<<"\n";
			cout<<"Elements of second array : ";
			for(pos=0;pos<m;pos++)
			{
				cout<<b[pos];
				cout<<"\t";
			}
			cout<<"\n";
			cout<<"\n";
			cout<<"Merged array : ";
			for(pos=0;pos<n+m;pos++) 
			{
				if(pos<n)
				{
					c[pos]=a[pos];
				}
				else
				{
					c[pos]=b[pos-n];
				}
			}
			for(pos=0;pos<m+n;pos++)
			{
				cout<<c[pos];
				cout<<"\t";
			}
		}
};
int main()
{
	array ob;
	ob.merge_array();
}
