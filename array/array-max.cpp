//wap to find maximum and minimum element in an array.
#include<iostream>
using namespace std;
class array
{
	public:

		void max()
		{
			int n;
			cout<<"Enter the array size : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos,sum;
			int max=0;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
				if(a[pos]>max)
				{
					max=a[pos];
				}
			}
			cout<<"\n";
			cout<<"Maximum element : "<<max;
		}
};
int main()
{
	array ob;
	ob.max();
}
