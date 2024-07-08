#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void fun1()
    {
        cout << "Inside func 1" << endl;
    }
};

class B : public A
{
public:
    void fun2()
    {
        cout << "Inside func 2" << endl;
    }
};

class C : public A
{
public:
    void fun3()
    {
        cout << "Inside func 3" << endl;
    }
};

int main()
{
    A a;
    a.fun1();

    B b;
    b.fun2();
    b.fun1();

    C c;
    c.fun3();
    c.fun1();
    return 0;
}