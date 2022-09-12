//wap to find sum of minor diagonal elelments of a matrix.
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
			cout<<'\n';
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
					if(c+1==n-r)
					{
						sum=sum+a[r][c];
					}
				}
			}
			cout<<"Sum of the minor diagonal elements : "<<sum;
		}
};
int main()
{
	mat ob;ob.sum();
}
