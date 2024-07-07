#include <bits/stdc++.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    // properties
    char level;

    Hero()
    {
        cout << "Constructor Called" << endl;
    }

    // Parameterised Constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // static allocation
    // Hero h1;

    // h1.setHealth(70);
    // h1.level = 'A';

    // cout << "Health: " << h1.getHealth() << endl;
    // cout << "Level: " << h1.level << endl;

    // // dynamically
    // Hero *b = new Hero;
    // b->setHealth(80);
    // b->setLevel('B');

    // cout << "Health: " << (*b).getHealth() << endl;
    // cout << "Level: " << (*b).level << endl;

    // cout << "Health: " << b->getHealth() << endl;
    // cout << "Level: " << b->level << endl;

    /*
        Hero A(10);
        A.print();

        // dynamically
        Hero *h = new Hero(11);
        h->print();

        Hero B(22, 'L');
        B.print();

    */

    /*Hero A(10,'B');
    A.print();

    Hero B(A);
    B.print();
    */

    return 0;
}