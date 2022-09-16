//wap to find transpose of a matrix.
#include<iostream>
using namespace std;
class mat
{
	public:
		void transpose()
		{
			int n,m;
			cout<<"Enter the size of the matrix (rows) : ";
			cin>>n;
			cout<<"\n";
			cout<<"Enter the size of the matrix (columns) : ";
			cin>>m;
			cout<<"\n";
			int a[n][m],r,c,b[m][n];
			for(r=0;r<n;r++)
			{
				for(c=0;c<m;c++)
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
				for(c=0;c<m;c++)
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
			for(r=0;r<m;r++)
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
