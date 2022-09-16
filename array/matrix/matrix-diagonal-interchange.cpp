//wap to interchange diagonals of a matrix.
#include<iostream>
using namespace std;
class mat
{
	public:
		void diagonal_exchange()
		{
			int n;
			cout<<"Enter the size of the matrix : ";
			cin>>n;
			cout<<"\n";
			int a[n][n],r,c,temp=0;
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
					if(c+1==n-r)
					{
						temp=a[r][c];
						a[r][c]=a[r][r];
						a[r][r]=temp;
					}
				}
			}
			cout<<"Swapped matrix : ";
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
		}
};
int main()
{
	mat ob;
	ob.diagonal_exchange();
}
