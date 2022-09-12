//wap to add two matrices(square matrices).
#include<iostream>
using namespace std;
class mat
{
	public:
		void sum()
		{
			int n;
			cout<<"Enter the size of matrix : ";
			cin>>n;
			cout<<"\n";
			int a[n][n],s[n][n],t[n][n],r,c;
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
					cout<<"Enter the element for s["<<r<<"]["<<c<<"] : ";
					cin>>s[r][c];
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
					cout<<s[r][c];
					cout<<"\t";
				}
				cout<<"\n";
			}
			cout<<"\n";
			cout<<"Sum of the two matrices : ";
			cout<<"\n";
			cout<<"\n";
			for(r=0;r<n;r++)
			{
				for(c=0;c<n;c++)
				{
					t[r][c]=a[r][c]+s[r][c];
					cout<<t[r][c];
					cout<<"\t";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	mat ob;
	ob.sum();
}
	
