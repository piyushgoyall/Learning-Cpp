//wap to calculate profit and loss percent on the basis of cost and sale price.
#include<iostream>
using namespace std;
int main()
{
	float cp,sp,profit,loss,lper,pper;
	cout<<"Enter the Cost price : ";
	cin>>cp;
	cout<<"\n";
	cout<<"Enter the selling price : ";
	cin>>sp;
	cout<<"\n";
	if(cp>sp)
	{
		loss=cp-sp;
		lper=(loss*100)/cp;
		cout<<"Percentage loss : "<<lper;
		cout<<"%";
	}
	if(sp>cp)
	{
		profit=sp-cp;
		pper=(profit*100)/cp;
		cout<<"Percentage profit : "<<pper;
		cout<<"%";
	}
}
