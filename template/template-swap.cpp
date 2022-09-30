//C++ Program to Swap data using function template
#include<iostream>
using namespace std;

template<class T>
void Swap(T &n1, T &n2)
{
	T temp=n1;
	n1=n2;
	n2=temp;
	
}
int main()
{
	int i1, i2;
    float f1, f2;
	char c1, c2;
	cout<<"Enter two integer values : ";
	cin>>i1>>i2;
	cout<<"\n";
	cout<<"Enter two float values : ";
	cin>>f1>>f2;
	cout<<"\n";
	cout<<"Enter two character values : ";
	cin>>c1>>c2;
	cout<<"\n";
	
    cout << "Before passing data to function template :\n";
    cout<<"\n";
    cout << "i1 = " << i1 << "  i2 = " << i2;
    cout<<"\n";
    cout << "\nf1 = " << f1 << "  f2 = " << f2;
    cout<<"\n";
    cout << "\nc1 = " << c1 << "  c2 = " << c2;

    Swap(i1, i2);
    Swap(f1, f2);
    Swap(c1, c2);

    cout << "\n\nAfter passing data to function template : \n";
    cout<<"\n";
    cout << "i1 = " << i1 << "  i2 = " << i2;
    cout<<"\n";
    cout << "\nf1 = " << f1 << "  f2 = " << f2;
    cout<<"\n";
    cout << "\nc1 = " << c1 << "  c2 = " << c2;
	return 0;
}
