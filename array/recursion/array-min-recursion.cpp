//wap to find minimum element in an array.
#include<iostream>
using namespace std;
int array_min(int arr[], int start, int N);
int main()
{
	int arr[100],N,i;
	cout<<"Enter the size of the array : ";
	cin>>N;
	cout<<"\n";
	for(i=0;i<N;i++)
	{
		cout<<"Enter element for arr["<<i<<"] : ";
		cin>>arr[i];
	}
	cout<<"\n";
    	cout<<"Minimum element : ";
    	int k = array_min(arr, 0, N);
    	cout<<k;
}
int array_min(int arr[], int start, int N)
{
	static int min=arr[0];
	if(start<N)
	{
		if(arr[start]<min)
		{
			min = arr[start];
			array_min(arr,start+1,N);
		}
		else
		{
			array_min(arr,start+1,N);
		}
	}
	else
	{
		return min;
	}
}
