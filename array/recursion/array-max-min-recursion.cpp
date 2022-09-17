//wap to find second largrest element in an array.
#include<iostream>
using namespace std;
int array_max(int arr[], int start, int N);
int array_min(int arr[], int start, int N);
int main()
{
    int arr[100];
    int N, i;
    cout<<"Enter size of the array: ";
    cin>>N;
    cout<<"\n";
    for(i=0; i<N; i++) 
    {
        cout<<"Enter element for arr["<<i<<"] : ";
		cin>>arr[i];
    }
    cout<<"\n";
    cout<<"Maximum element : ";
    int k = array_max(arr, 0, N);
    cout<<k;
    cout<<"\n";
    cout<<"Minimum element : ";
    int p = array_min(arr, 0, N);
    cout<<p;
}
int array_max(int arr[], int start, int N)
{
	static int max=arr[0];
	if(start<=N-1)
  	{
  		if(arr[start]>max)
		{
		    max=arr[start];
  			array_max(arr,start+1,N);
  		}
  		else
  		{
  			array_max(arr,start+1,N);
  		}
	}
  	else
  	{
  		return max;
	}
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
