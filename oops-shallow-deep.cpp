#include <iostream>
#include <cstring>
using namespace std;

class Hero {
public:
    int health;
    char level;
    char *name;
    
    void print() {
        cout << "Name: " << name << endl;
        cout << "Level: " << this->level << endl;
        cout << "Health: " << this->health << endl;
    }

    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    Hero(int health) {
        cout << "This address -> " << this << endl;
        this->health = health;
        name = new char[100];
    }

    Hero(int health, char level) {
        this->health = health;
        this->level = level;
        name = new char[100];
    }

    // Shallow Copy Constructor
    Hero(const Hero &temp) {
        cout << "Shallow Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
        //this->name = temp.name;  // Shallow copy (pointer address is copied)
    
        //for deep copy constructor
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
    }

    int getHealth() {
        return health;
    }

    void setHealth(int h) {
        health = h;
    }

    int getLevel() {
        return level;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
    
    ~Hero(){
        cout<<"desturctor called "<<endl;
        
    }
};

int main() {
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    
    char name[7] = "dpk";
    hero1.setName(name);
    
    //hero1.print();
    
    // Using shallow copy constructor
    Hero hero2(hero1);
    //hero2.print();
    
    // Modifying name of hero1
    hero1.name[0] = 's';
    hero1.print();
    hero2.print();  // hero2 will also reflect the change because of shallow copy
    
    hero1=hero2;//copy assignment operator
    
    hero1.print();
    hero2.print();
    
    return 0;
}
