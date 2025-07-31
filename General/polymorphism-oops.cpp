#include <iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"hello dpk"<<endl;
    }
    int sayhello(string name,int n){
        cout<<"hello"<<name<<endl;
        return n;
    }
    void sayhello(string name){
        cout<<"hello"<<name<<endl;
    }
    
};
class B{
    public:
    int a;
    int b;
    
    public:
    int add(){
        return a+b;
    }
    void operator+(B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output "<<value2-value1<<endl;
        cout<<"Hello Babbar"<<endl;
    }
    void operator()(){   //operator overload
        cout<<"main bracket hu "<<endl;
        
    }
};

int main(){
    
    // A obj1;
    
    // obj1.sayhello();
    
    B obj1,obj2;
    
    obj1.a=4;
    obj2.a=7;
    
    obj1+obj2;
    obj1();
    
    return 0;
    
}