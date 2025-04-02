#include <iostream>
using namespace std;

class Hero {
    
    // properties
public:
    int health;
    char level;

    // Default constructor
    Hero() {
        cout << "Constructor called" << endl;
    }

    // Parameterized constructor 1
    Hero(int health) {
        cout << "this health -> " << this << endl;
        this->health = health;
    }

    // Parameterized constructor 2
    Hero(int health, char level) {
        cout << "this level, health -> " << this << endl;
        this->health = health;
        this->level = level;
    }

    // Getter methods
    int gethealth() {
        return health;
    }

    char getlevel() {
        return level;
    }

    // Setter methods
    void sethealth(int h) {
        health = h;
    }

    void setlevel(char ch) {
        level = ch;
    }

    // Print function to display Hero details
    void print() {
        cout << "Health: " << health << ", Level: " << level << endl;
    }
};

int main() {
    
    // Object created statically
    Hero ramesh(10);
    // cout << "Address of ramesh " << &ramesh << endl;
    // ramesh.gethealth();
    ramesh.print();  // Call the print function
    
    // Dynamically allocated object
    Hero* h = new Hero(90);
    h->print();  // Call the print function

    Hero temp(11, 'S');
    temp.print();  // Call the print function

    /*
    // Static allocation
    Hero a;
    a.setlevel('S');
    a.sethealth(90);
    cout << "level is : " << a.level << endl;
    cout << "health is : " << a.health << endl;

    // Dynamically allocation
    Hero *b = new Hero;
    (*b).sethealth(12);
    (*b).setlevel('D');

    cout << "level2 is : " << (*b).level << endl;
    cout << "health2 is : " << (*b).health << endl;

    b->setlevel('A');
    b->sethealth(22);

    cout << "level3 is : " << b->level << endl;
    cout << "health3 is : " << b->health << endl;
    */

    // Hero ramesh; // Creation of object
    // cout << "Size of ramesh: " << sizeof(ramesh) << endl;

    // // ramesh.health = 70;

    // ramesh.level = 'A';
    // cout << "health is 1 : " << ramesh.gethealth() << endl;

    // // Use of setter
    // ramesh.sethealth(70);

    // cout << "health is : " << ramesh.gethealth() << endl;
    // cout << "level is : " << ramesh.level << endl;

    return 0;
}
