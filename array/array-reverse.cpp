//wap to find reverse of an array.
#include<iostream>
using namespace std;
class array
{
	public:
		void array_reverse()
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
			cout<<"Reversed array :  ";
			for(pos=n-1;pos>=0;pos--)
			{
				cout<<a[pos];
				cout<<"\t";
			}
		}
};
int  main()
{
	array ob;
	ob.array_reverse();
}
