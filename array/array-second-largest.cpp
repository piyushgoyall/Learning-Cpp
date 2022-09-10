//wap to find the second largest element in an array.
#include<iostream>
using namespace std;
class array
{
	public:
		void sec_max()
		{
			int n;
			cout<<"Enter the limit of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos,max,min,sec;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}
			max=min=a[0];
			for(pos=0;pos<n;pos++)
			{
				if(a[pos]>max)
				{
					max=a[pos];
				}
				if(a[pos]<min)
				{
					min=a[pos];
				}
			}
			/*cout<<"\n";
			cout<<"Maximum element : "<<max;
			cout<<"\n";
			cout<<"Minimum element : "<<min;
			cout<<"\n";*/
			sec=a[0];
			for(pos=0;pos<n;pos++)
			{
				if(a[pos]<max&&a[pos]>min)
				{
					if(sec<a[pos])
					{
						sec=a[pos];
					}
				}
			}
			cout<<"\n";
			cout<<"Second largest : "<<sec;
		}
};
int main()
{
	array ob;
	ob.sec_max();
}
