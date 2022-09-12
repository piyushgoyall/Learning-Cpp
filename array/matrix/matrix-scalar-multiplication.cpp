//wap to perform scalar matrix multiplication(square matrices).
#include<iostream>
using namespace std;
class mat
{
	public:
		void multiply()
		{
			int n;
			cout<<"Enter the size of the matrix : ";
			cin>>n;
			cout<<"\n";
			int a[n][n],x,m[n][n],r,c;
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
			cout<<"Enter the number to multiply the matrix with : ";
			cin>>x;
			cout<<"\n";
			cout<<"Altered matrix : ";
			cout<<"\n";
			cout<<"\n";
			for(r=0;r<n;r++)
			{
				for(c=0;c<n;c++)
				{
					m[r][c]=(a[r][c])*x;
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
	ob.multiply();
}
