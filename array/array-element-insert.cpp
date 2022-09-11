//Wap to insert an element in an array at specified position.
#include<iostream>
using namespace std;
class array
{
	public:
		void insert()
		{
			int n;
			cout<<"Enter the size of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],b[n+1],pos,x,i;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			cout<<"Enter the element to be inserted : ";
			cin>>x;
			cout<<"\n";
			cout<<"Enter the position for the element to be inserted at : ";
			cin>>i;
			cout<<"\n";
			for(pos=0;pos<n+1;pos++)
			{
				if(pos<i)
				{
					b[pos]=a[pos];
				}
				else if(pos==i)
				{
					b[pos]=x;
				}
				else if(pos>i)
				{
					b[pos]=a[pos-1];
				}
				cout<<"Array after inserting element : \t"<<b[pos];
				cout<<"\n";
			}
		}
};
int main()
{
	array ob;
	ob.insert();
}

