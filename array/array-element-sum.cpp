//wap to find sum of all array elements.
#include<iostream>
using namespace std;
class array
{
	public:

		void sum()
		{
			int n;
			cout<<"Enter the array size : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos,sum;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			for(pos=0;pos<n;pos++)
			{
				sum=sum+a[pos];
			}
			cout<<"\n";
			cout<<"Sum of the elements of the array : "<<sum;
		}
};
int main()
{
	array ob;
	ob.sum();
}
