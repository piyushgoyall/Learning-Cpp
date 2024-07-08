#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "Inside class A" << endl;
    }
};

class B
{
public:
    void fun()
    {
        cout << "Inside class B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    // obj.func();

    obj.A::func();
    return 0;
}