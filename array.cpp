#include<iostream>
using namespace std;
class array
{
	public:
		void display()
		{
			int a[5],pos;
			for(pos=0;pos<5;pos++)
			{
				cout<<"Enter the element for a["<<pos<<"] : ";
				cin>>a[pos];
			}	
			cout<<"\n";
			for(pos=0;pos<5;pos++)
			{
				cout<<"Element of a["<<pos<<"] = "<<a[pos];
				cout<<"\n";
			}
		}
};
int main()
{
	array ob;
	ob.display(); 
}
