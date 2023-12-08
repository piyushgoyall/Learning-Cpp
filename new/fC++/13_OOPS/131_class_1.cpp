#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    bool gender;

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
    Student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Name = ";
        cin >> arr[i].name;
        cout << "Age = ";
        cin >> arr[i].age;
        cout << "Gender = ";
        cin >> arr[i].gender;
    }

    cout << "Information: " << endl;

    for (int i = 0; i < 3; i++)
    {
        arr[i].printInfo();
    }

    // Suppose we want to create more instances of the class so instead of creating new object for each case we can create an array of objects.

    // Student a;
    // a.name = "Urvi";
    // a.age = 20;
    // a.gender = 1;
    return 0;
}