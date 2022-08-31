//wap to enter marks of five subjects and calculate total and percentage.
#include<iostream>
using namespace std;
int main()
{
	float math,phy,chem,bio,eng,total,perc;
	cout<<"Enter marks of Maths : ";
	cin>>math;
	cout<<"\n";
	cout<<"Enter marks of Physics : ";
	cin>>phy;
	cout<<"\n";
	cout<<"Enter marks of Chemistry : ";
	cin>>chem;
	cout<<"\n";
	cout<<"Enter marks of Biology : ";
	cin>>bio;
	cout<<"\n";
	cout<<"Enter marks of English : ";
	cin>>eng;
	cout<<"\n";
	total = math+phy+chem+bio+eng;
	cout<<"Total marks out of 500 : "<<total;
	cout<<"\n";
	cout<<"\n";
	perc=total/5;
	cout<<"Percentage : "<<perc;cout<<"%";
}
