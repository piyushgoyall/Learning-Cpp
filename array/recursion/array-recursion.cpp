//wap to print all array elements using recursion.
#include <iostream>
using namespace std;
void printArray(int arr[], int start, int N);
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
    cout<<"Elements in the array: ";
    cout<<"\n";
    cout<<"\n";
    printArray(arr, 0, N);
}
void printArray(int arr[], int start, int N)
{
	if(start<N)
  	{
  		cout<<arr[start];
  		cout<<"\t";
  		printArray(arr,start+1,N);
  	}
}
