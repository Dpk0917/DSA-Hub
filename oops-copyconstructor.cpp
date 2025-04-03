#include <iostream>
using namespace std;

class Hero {
public:

	int health;
	char level;
	void print() {
		cout<<"level: "<<level<<endl;
		cout<<"health: "<<health<<endl;
	}

	Hero() {
		cout<<"constructor called"<<endl;
	}

	//parameterised constructor
	Hero(int health) {
		cout<<"this address -> "<<this<<endl;
		this->health=health;

	}
	Hero(int health,char level) {
		this->health=health;
		this->level=level;

	}
    
    
    //copy constructor
    Hero(Hero &temp){
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
        
    }
	int getHealth() {
		return health;

	}
	void setHealth(int h) {
		health=h;

	}

	int getLevel() {
		return level;

	}
	void setLevel(char ch) {
		level=ch;
	}
};

int main(){
    
    Hero suresh(78,'C');
    suresh.print();
    
    Hero R(suresh);
    R.print();
    
    
    return 0;
}