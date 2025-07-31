#include <iostream>
using namespace std;

class Teacher{
private:
    double salary; //data hiding
    
public:
    
    //properties/attributes
    string name;
    string dept;
    string subject;
    
    
    //non parameterized constructor
    // Teacher(){
    //     cout<<"Hi,I am constructor"<<endl;
    //     dept="computer science";
    // }
    
    //parameterized
    Teacher(string name,string dept,string subject,double salary){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
        
    }
    
    //copy constructor
    Teacher(Teacher &orgobj){
        cout<<"I am custom copy constructor"<<endl;
        this->name=orgobj.name;
        this->dept=orgobj.dept;
        this->subject=orgobj.subject;
        this->salary=orgobj.salary;
        
    }
    
    void info(){ //for output of t2
        cout<<"info name: "<<name<<endl;
        cout<<"info dept: "<<dept<<endl;
    }  
    //method/member function
    void changeDept(string newdept){
      dept=newdept;
    }
    
    void setSalary(int s){
        salary=s;
    }
    double getSalary(){
        return salary;
    }
};

class student{
public:
    
    string name;
    double *cgpaPtr;
    
    student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
        
    }
    student(student &obj){
        
        //shallow
        // this->name=obj.name;
        // this->cgpaPtr=obj.cgpaPtr;
        
        //deep
        this->name=obj.name;
        cgpaPtr=new double;
        *cgpaPtr=*obj.cgpaPtr;
        
    }
    
    //destructor
    ~student(){
        cout<<"hi i delete everything"<<endl;
        delete cgpaPtr;
        
    }
    
    void getinfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
        
    }
    
};

int main(){
    
    //object for non parameterized
    // Teacher t1;
    // t1.name="sakshi";
    // //t1.dept="computer";
    // t1.subject="C++";
    // t1.setSalary(50000);
    
    //Teacher t2("dpk","computer","C++",45000);
    
    //for non parameterized
    // cout<<"name: "<<t1.name<<endl;
    // cout<<"dept: "<<t1.dept<<endl;
    // cout<<"salary: "<<t1.getSalary()<<endl;
    
    
    //for parameterized
    // cout<<"name: "<<t2.name<<endl;
    // cout<<"dept: "<<t2.dept<<endl;
    // cout<<"salary: "<<t2.getSalary()<<endl;
    //cout<<endl;
    
    Teacher t3("dpk","computer","C++",45000);
    
    //copying 
    Teacher t4(t3);
    t4.info();
    
    student s1("us",9);
    s1.getinfo();
    student s2(s1);
    *(s2.cgpaPtr)=8.9;
    s2.getinfo();
    return 0;
}
