#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    cout << "Hey bhavi " << endl;

    cout << endl;

    int a = 3, b = 333, c = 33333, d = 3333333;
    cout << "the value of a is: " << setw(4) << a << endl;
    cout << "the value of b is: " << setw(5) << b << endl;
    cout << "the value of c is: " << setw(6) << c << endl;
    cout << "the value of d is: " << setw(7) << d << endl;

    cout << endl;

    int A = 2005, B = 2000, C = 2030;
    int D = ((((A + B) - 1) * 33) + C);
    cout << "The value of D is: " << D << endl;

    cout << endl;

    int x = 25; // const int x = 25;
                //  When you put a "const" before int so you get only that variable answer:
    // When you don't put a "const" before int so you get double variable answer:
    cout << "The value of x is: " << x << endl;
    x = 52;
    cout << "The value of x is: " << x << endl;

    return 0;
}