#include <iostream>
using namespace std;

class Hero {
public:

	int health;
	char level;
	void print() {
		cout<<level<<endl;
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
		cout<<"this address2 -> "<<this<<endl;
		this->health=health;
		this->level=level;

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

int main() {

	cout<<"hi"<<endl;
	Hero ramesh(90);         //statically
	ramesh.print();
	
	Hero *h=new Hero();     //dynamically
	h->print();
	cout<<"address of ramesh: "<< &ramesh<<endl;

    Hero temp(9,'S');
    temp.print();
    
	// dynamically allocation
	// Hero *b=new Hero;
	// b->setHealth(90);
	// b->setLevel('S');

	// cout<<(*b).level<<endl;
	// cout<<(*b).getHealth()<<endl;

	// cout<<b->level<<endl;
	// cout<<b->getHealth()<<endl;

	// cout<<sizeof(*b)<<endl;

}