// C++ Program to implement Class Template Arguments
// Deduction

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

// Defining class template
template <typename T>
class student
{
private:
    string student_name;
    T total_marks;

public:
    // Parameterized constructor
    student(string n, T m) : student_name(n), total_marks(m) {}

    void getinfo()
    {
        // printing the details of the student
        cout << "STUDENT NAME: " << student_name << endl;
        cout << "TOTAL MARKS: " << total_marks << endl;
        cout << "Type ID: " << typeid(total_marks).name()
             << endl;
    }
};

int main()
{

    student s1("Vipul", 100); // Deduces student<int>
    student s2("Yash", 98.5); // Deduces student<double>

    s1.getinfo();
    s2.getinfo();

    return 0;
}
