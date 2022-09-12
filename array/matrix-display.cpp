//wap to enter and display a matrix.
#include<iostream>
using namespace std;
class mat
{
	public:
		void display()
		{
			int m[3][3],r,c;
			for(r=0;r<=2;r++)
			{
				for(c=0;c<=2;c++)
				{
					cout<<"Enter the element for m["<<r<<"]["<<c<<"] : ";
					cin>>m[r][c];
				}
			}
			cout<<"\n";
			cout<<"Entered matrix : ";
			cout<<"\n";
			cout<<"\n";
			for(r=0;r<=2;r++)
			{
				for(c=0;c<=2;c++)
				{
					cout<<m[r][c];
					cout<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	mat ob;
	ob.display();
}

