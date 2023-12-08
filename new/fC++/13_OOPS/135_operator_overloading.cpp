// Default Copy Constructor does SHALLOW COPY(consider an object with some data members which point to some dynamically allocated memory,
// on coping shallow copy will copy the pointers but the location pointed is not copied.)
// Whereas in Deep Copy(happens when we make a copy constructor ourselves, in this case both pointers and pointed address are copied).

#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;

public:
    int age;
    bool gender;

    // DEFAULT CONSTRUCTOR
    Student()
    {
        cout << "\nDefault Constructor\n";
    }

    // PARAMETERIZED CONSTRUCTOR
    Student(string s, int a, bool g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    }

    // COPY CONSTRUCTOR (USER DEFINED)
    Student(Student &a)
    {
        cout << "Copy constructor\n"
             << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~Student()
    {
        cout << "Destructor called!" << endl;
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

    bool operator==(Student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Student a("Urvi", 20, 1);
    a.printInfo();

    Student b("Rahul", 21, 0);

    Student c = a;
    // c.printInfo();

    if (c == a)
    {
        cout << "Same\n" << endl;
    }
    else
    {
        cout << "Not same\n" << endl;
    }

    return 0;
}