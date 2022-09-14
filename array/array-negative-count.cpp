//wap to count total number of negative elements in an array.
#include<iostream>
using namespace std;
class array
{
	public:
		void count_negative()
		{
			int n;
			cout<<"Enter the size of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos,count=0;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			cout<<"\n";
			for(pos=0;pos<n;pos++)
			{
				if(a[pos]<0)
				{
					count=count+1;
				}
			}
			cout<<"Total negative elements : "<<count;
		}
};
int main()
{
	array ob;
	ob.count_negative();
}
