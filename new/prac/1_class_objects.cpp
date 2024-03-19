#include <bits/stdc++.h>
using namespace std;

class Hero
{
    // Properties
private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;

    Hero()
    {
        name = new char[100];
        cout << "Constructor Called" << endl;
    }

    // Parameterised Constructor
    Hero(int health)
    {
        // cout << "this -> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // COPY Constructor (For Deep Copy)
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "My Copy constructor!" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // // COPY Constructor
    // Hero(Hero &temp)
    // {
    //     cout << "My Copy constructor!" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print()
    {
        cout << "Name: " << this->name << endl;
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }

    int getLevel()
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

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    static int random() // STATIC Function can access only static data members
    {
        return timeToComplete;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor Called" << endl;
    }
};

int Hero::timeToComplete = 5;

int main()
{
    // Static function
    cout << Hero::random() << endl;

    /* -- */

    // // Static data member
    // cout << Hero::timeToComplete << endl;

    // Hero a;
    // cout << a.timeToComplete << endl; // NOT RECOMMENDED As this data member does not belong to the object it belongs to the class

    // Hero b;
    // b.timeToComplete = 10;
    // cout << a.timeToComplete << endl;
    // cout << b.timeToComplete << endl;

    /* -- */

    // // Destructor

    // // STATIC
    // Hero A;
    // // DYNAMIC
    // Hero *b = new Hero();
    // delete b;

    /* -- */

    // // Copy Assignment Operator
    // Hero H1;
    // H1.setHealth(12);
    // H1.setLevel('D');
    // char name[8] = "Welcome";
    // H1.setName(name);
    // // H1.print();

    // Hero H2(H1);
    // // H2.print();

    // H1.name[0] = 'D';
    // H1.print();
    // H2.print();

    // H1 = H2;
    // H1.print();
    // H2.print();

    /* -- */

    // DEEP COPY
    // Hero H1;
    // H1.setHealth(12);
    // H1.setLevel('D');
    // char name[8] = "Welcome";
    // H1.setName(name);
    // H1.print();

    // Hero H2(H1);
    // H2.print();

    // H1.name[0] = 'D';
    // H1.print();
    // H2.print();

    // SHALLOW COPY

    // Hero H1;
    // H1.setHealth(12);
    // H1.setLevel('D');
    // char name[8] = "Welcome";
    // H1.setName(name);
    // H1.print();

    // // USE Default Copy Constructor
    // Hero H2(H1);
    // H2.print();

    // H1.name[0] = 'D';
    // H1.print();
    // H2.print();

    /* -- */

    // Hero S(70, 'C');
    // S.print();

    // Hero P(S);
    // P.print();

    /* -- */

    // Hero Iron(10);
    // // cout << "Address of Iron: " << &Iron << endl;
    // // Iron.getHealth();
    // Iron.print();

    // Hero *h = new Hero(11);
    // h->print();

    // Hero Strange(10, 'A');
    // // Strange.getHealth();
    // // Strange.getLevel();
    // Strange.print();

    /* -- */

    // // dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(80);
    // b->setLevel('X');

    // cout << "Level is: " << (*b).level << endl;
    // cout << "Health is: " << (*b).getHealth() << endl;

    // cout << "Level is: " << b->level << endl;
    // cout << "Health is: " << b->getHealth() << endl;

    // // static allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('A');
    // cout << "Level is: " << a.level << endl;
    // cout << "Health is: " << a.getHealth() << endl;

    // // Creation of Object
    // Hero Panther;
    // cout << "Panther health is: " << Panther.getHealth() << endl;
    // // Panther.health = 80;

    // // use setter
    // Panther.setHealth(80);
    // Panther.level = 'A';

    // // cout << "Health is: " << Panther.health << endl;
    // cout << "Health is: " << Panther.getHealth() << endl;
    // cout << "Level is: " << Panther.level << endl;

    // // cout << "Size: " << sizeof(Panther) << endl;
    return 0;
}