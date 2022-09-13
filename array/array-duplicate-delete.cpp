//wap to delete all duplicate elements from an array.
#include<iostream>
using namespace std;
class array
{
	public:
		void del()
		{
			int n;
			cout<<"Enter the size of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos,temp,flag;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			cout<<"\n";
			cout<<"Array after removing all duplicate elements : ";
			cout<<"\n";
			for(pos=0;pos<n;pos++)
			{
				flag=1;
				for(temp=pos+1;temp<n;temp++)
				{
					if(a[pos]==a[temp])
					{
						flag=0;
					}
				}
				if(flag==1)
				{
					cout<<a[pos];
					cout<<"\n";
				}
			}
		}
};
int main()
{
	array ob;
	ob.del();
}
