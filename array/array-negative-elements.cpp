//wap to print all negative elements in an array.
#include<iostream>
using namespace std;
class array
{
	public:
		void negative()
		{
			int n;
			cout<<"Enter the size of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			cout<<"Negative elements of the array : ";
			for(pos=0;pos<n;pos++)
			{
				if(a[pos]<0)
				{
					cout<<a[pos];
					cout<<"\t";
				}
			}
		}
};
int main()
{
	array ob;
	ob.negative();
}
