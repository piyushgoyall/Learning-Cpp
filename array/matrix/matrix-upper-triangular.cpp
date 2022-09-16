//wap to find upper triangular matrix.
#include<iostream>
using namespace std;
class mat 
{
	public:
		void upper_triangular()
		{
			int n;
			cout<<"Enter the size of the matrix : ";
			cin>>n;
			cout<<"\n";
			int a[n][n],r,c;
			for(r=0;r<n;r++)
			{
				for(c=0;c<n;c++)
				{
					cout<<"Enter the element for a["<<r<<"]["<<c<<"] : ";
					cin>>a[r][c];
				}
			}
			cout<<"\n";
			cout<<"Entered matrix : ";
			cout<<"\n";
			cout<<"\n";
			for(r=0;r<n;r++)
			{
				for(c=0;c<n;c++)
				{
					cout<<a[r][c];
					cout<<"\t";
				}
				cout<<"\n";
			}
			cout<<"\n";
			for(r=0;r<n;r++)
			{
				for(c=0;c<n;c++)
				{
					if(r<=c)
					{
						cout<<a[r][c];
					}
					if(r>c)
					{
						cout<<"0";
						cout<<"\t";
					}
					else
					{
						cout<<"\t";
					}
				}
				cout<<"\n";
			}
		}
};
int main()
{
	mat ob;
	ob.upper_triangular();
}
