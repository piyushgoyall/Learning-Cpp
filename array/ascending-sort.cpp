//wap to sort an array in ascending order using function.
#include<iostream>
using namespace std;

int sort(int a[],int n)
{
	int i,j,min,temp;
	for(int i=0; i<n; i++)
	{
		
		for(int j=i+1; j<n; j++)
		{
			if(a[j] < a[i])
			{
				
				temp=a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[100],i,n,j;
	cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"\n";
    for(i=0; i<n; i++) 
    {
        cout<<"Enter element for arr["<<i<<"] : ";
		cin>>a[i];
    }
    cout<<"\n";
    cout<<"Sorted array : ";
    cout<<"\n";
   	sort(a,n);
    
}
