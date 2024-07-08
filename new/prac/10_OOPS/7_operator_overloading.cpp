#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(A obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << "Output " << val2 - val1 << endl;
    }

    void operator()()
    {
        cout << "I am a bracket " << this->a << endl;
    }
};

int main()
{
    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;

    obj1();
    return 0;
}