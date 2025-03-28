#include<iostream>

using namespace std;

#define PI 3.14
#define AREA(l,b)(l*b)
int main(){
    
    int r=5;
    //double pi=3.14; 
    double area1=PI*r*r;
    int l1=5,l2=5,area2;
    
    area2=AREA(l1,l2);
    
    cout<<"The area is: "<<area1<<endl;
    cout<<"the area of rectangle: "<<area2<<endl;
    
    return 0;
    
}