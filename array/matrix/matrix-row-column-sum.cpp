//wap to find sum of each row and column of a matrix.
#include<iostream>
using namespace std;
class mat
{
	public:
		void sum()
		{
			int n;
			cout<<"Enter the size of the matrix : ";
			cin>>n;
			cout<<"\n";
			int a[n][n],r,c,sum=0;
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
				sum=0;
				for(c=0;c<n;c++)
				{
					sum=sum+a[r][c];
				}
				cout<<"Sum of row ["<<r<<"] : "<<sum;
				cout<<"\n";
			}
			cout<<"\n";
			for(r=0;r<n;r++)
			{
				sum=0;
				for(c=0;c<n;c++)
				{
					sum=sum+a[c][r];
				}
				cout<<"Sum of column ["<<r<<"] : "<<sum;
				cout<<"\n";
			}
		}
};
int main()
{
	mat ob;
	ob.sum();
}
