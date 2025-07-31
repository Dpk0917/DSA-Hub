#include <iostream>
using namespace std;


                        //SINGLE

// class Animal{
// public: 
    
//     int height;
//     int age;
//     int weight;
// public:    
//     void speak(){
//         cout<<"speaking"<<endl;
        
//     }
    
    
// };

// class Dog: public Animal{
   
// };
// int main(){
    
//     Dog d1;
//     d1.speak();
    
//     return 0;
    
// }

                        //Multi-Class

// class Animal{
// public: 
    
//     int height;
//     int age;
//     int weight;
// public:    
//     void speak(){
//         cout<<"speaking"<<endl;
//     }
    
// };

// class Dog: public Animal{
   
// };

// class Pug: public Dog{
    
// };
// int main(){
    
//     Pug p1;
//     p1.speak();
    
//     return 0;
    
// }         



                        //Multiple

// class Animal{
// public: 
    
//     int height;
//     int age;
//     int weight;
// public:    
//     void bark(){
//         cout<<"barking"<<endl;
//     }
    
// };

// class Human{
// public: 
    
//     int height;
//     int age;
//     int weight;
// public:    
//     void speak(){
//         cout<<"speaking"<<endl;
        
//     }
    
// };

// class Hybrid: public Animal,public Human{
   
// };

// int main(){
    
//     Hybrid h1;
//     h1.speak();
//     h1.bark();
    
//     return 0;
    
// }         



                        //Hierachical
                        
// class A{
// public:
//     void func1(){
//         cout<<"inside func1"<<endl;
        
//     }
    
// };

// class B:public A{
// public:
//     void func2(){
//         cout<<"inside func2"<<endl;
        
//     }
// };

// class C:public A{
// public:
//     void func3(){
//         cout<<"inside func3"<<endl;
        
//     }
// };

// int main(){
    
//     A a1;
//     a1.func1();
    
//     B b1;
//     b1.func1();
//     b1.func2();
    
//     C c1;
//     c1.func1();
//     c1.func3();
    
    
//     return 0;
// }

                        //Hybrid

// class Hostel{
// public: 
    
//     int dpk;
//     int paranjal;
    
//     void us(){
//         cout<<"Bakchod hai hum toh"<<endl;
//     }
    
    
// };
// class Portacabin{
// public:
//     int aman;
//     int aayushman;
    
//     void hum(){
//         cout<<"inside Portacabin"<<endl;
        
//     }


// };

// class room10:public Hostel{
// public:
//     void func3(){
//         cout<<"inside room 10"<<endl;
//     }
// };

// class room1:public Hostel,public Portacabin{
// public:
//     void func4(){
//         cout<<"inside room 1"<<endl;
        
//     }
// };
           
// int main(){
    
//     Hostel h1;
//     h1.us();
    
//     Portacabin p1;
//     p1.hum();
    
//     room10 r1;
//     r1.func3();
//     r1.us();
    
//     room1 r2;
//     r2.func4();
//     r2.us();
//     r2.hum();
    
    
//     return 0;
    
// }         

                            //inheritance ambiguity
                            

class A{
    public: 
    
    void abc(){
        cout<<"inside A"<<endl;
    }
};
class B{
    public: 
    
    void abc(){
        cout<<"inside B"<<endl;
    }
};

class C:public A,public B{
    public:
    
};


int main(){
    
    C c1;
    c1.A::abc();
    c1.B::abc();
    
    return 0;
}