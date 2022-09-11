//wap to count total number of duplicate elements in an array.
#include<iostream>
using namespace std;
class array
{
	public:
		void duplicate()
		{
			int n;
			cout<<"Enter the size of the array : ";
			cin>>n;
			cout<<"\n";
			int a[n],pos,i,flag=0,count;
			for(pos=0;pos<n;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos]; 
			}
			cout<<"\n";
			for(pos=0;pos<n;pos++)
			{
				flag=0;
				for(i=pos+1;i<n;i++)
				{
					if(a[pos]==a[i])
					{
						flag=1;
					}
				}
				if(flag==1)
				{
					count=count+1;
				}
			}
			cout<<"Total Duplicate elements : "<<count;
		}
};
int main()
{
	array ob;
	ob.duplicate();
}
