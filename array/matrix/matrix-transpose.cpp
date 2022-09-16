//wap to find transpose of a matrix.
#include<iostream>
using namespace std;
class mat
{
	public:
		void transpose()
		{
			int n;
			cout<<"Enter the size of the matrix : ";
			cin>>n;
			cout<<"\n";
			int a[n][n],r,c,b[n][n];
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
			cout<<"Transpose matrix : ";
			cout<<"\n";
			cout<<"\n";
			for(r=0;r<n;r++)
			{
				for(c=0;c<n;c++)
				{
					b[r][c]=a[c][r];
					cout<<b[r][c];
					cout<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	mat ob;
	ob.transpose();
}
