#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

//DEFAULT CONSTRUCTOR
    Student()
    {
        cout << "\nDefault Constructor";
    }

// PARAMETERIZED CONSTRUCTOR
    Student(string s, int a, bool g)
    {
        name = s;
        age = a;
        gender = g;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << "Name = ";
        cout << name << endl;
        cout << "Age = ";
        cout << age << endl;
        cout << "Gender = ";
        cout << gender << endl;
    }
};

int main()
{
    Student a("Urvi", 20, 1);
    a.printInfo();

    Student b;

    return 0;
}