#include <iostream>
#include <cstring>
using namespace std;

class Hero {
public:
    int health;
    char level;
    char *name;
    static int timeToComplete;
    
    
    static int random(){
        return timeToComplete;
        
    }
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

int Hero::timeToComplete=5;

int main(){
    
    cout<<Hero::timeToComplete<<endl;
    
    // Hero a;
    // cout<<a.timeToComplete<<endl;
    
    // Hero b;
    // b.timeToComplete=9;
    // cout<<b.timeToComplete<<endl;
    
    // cout<<a.timeToComplete<<endl;
    
    
    
    
    //stattically
    // Hero a;
    
    //dynamically
    // Hero *b=new Hero;
    
    //manually delete
    // delete b;
    
}