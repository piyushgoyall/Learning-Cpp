#include<iostream>
using namespace std;
class Circle
{
	public:
		const float pi=3.142857;
		void area()
		{
			float rad,area;
			cout<<"Enter the radius : ";
			cin>>rad;
			area=pi*rad*rad;
			cout<<"Area of the circle : "<<area;
			cout<<" sq. units";
		}
};
int main()
{
	Circle ob;
	ob.area();
}
