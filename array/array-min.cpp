#include<iostream>
using namespace std;
class array
{
	public:
		void min()
		{
			int n;
			cout<<"Enter the size of array : ";
			cin>>n;
			int a[n],pos,min;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			min = a[0];
			for(pos=0;pos<n;pos++)
			{
				if(a[pos]<min)
				{
					min=a[pos];
				}
			}
			cout<<"Minimum element : "<<min;
		}
};
int main()
{
	array ob;
	ob.min();
}
