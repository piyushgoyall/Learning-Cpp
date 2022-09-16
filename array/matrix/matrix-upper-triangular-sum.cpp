//wap to find upper triangular matrix.
#include<iostream>
using namespace std;
class mat 
{
	public:
		void upper_tri_sum()
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
			cout<<"\n";
			cout<<"Sum of the upper triangular matrix : ";
			for(r=0;r<n;r++)
			{
				for(c=0;c<n;c++)
				{
					if(r<=c)
					{
						sum=sum+a[r][c];
					}
				}
			}
			cout<<sum;
		}
};
int main()
{
	mat ob;
	ob.upper_tri_sum();
}
