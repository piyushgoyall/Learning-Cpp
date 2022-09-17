//wap to find sum of all array elements using recursion.
#include <iostream>
using namespace std;
int array_add(int arr[], int start, int N);
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
    	cout<<"Sum of all elements : ";
    	int sum = array_add(arr, 0, N);
    	cout<<sum;
}
int array_add(int arr[], int start, int N)
{
	static int sum=0;
	if(start<=N-1)
  	{
  		sum=sum+arr[start];
  		array_add(arr,start+1,N);
  	}
  	else
  	{
  		return sum;
		  	
	}
}
