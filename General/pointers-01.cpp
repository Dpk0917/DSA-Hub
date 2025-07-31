#include<iostream>

using namespace std;

int main(){
    
    /*
    int num=5;
    cout<<num<<endl;
    
    int *pointer=&num;
    
    cout<<"The value assigned to the pointer: "<<*pointer<<endl;
    cout<<"The address of pointer : "<<pointer<<endl;
    cout<<"The size of num : "<<sizeof(num)<<endl;
    cout<<"The size of pointer : "<<sizeof(pointer)<<endl;
    cout<<"The size of *pointer : "<<sizeof(*pointer)<<endl;
    
    cout<<endl;
    
    double a=4.3;
    double *p1=&a;
    cout<<"The value assigned to the p1: "<<*p1<<endl;
    cout<<"The address of p1: "<<p1<<endl;
    cout<<"The size of a : "<<sizeof(a)<<endl;
    cout<<"The size of p1 : "<<sizeof(p1)<<endl;
    */
    
    
    int num=5;
    int a=num;
    a++;
    
    
    int *p=&num;
    cout<<"before: "<<num<<endl;
    (*p)++;
    *p=(*p)*2;
    cout<<*p<<endl;
    cout<<"after: "<<num<<endl;
    
    //coping a pointer
    int *q=p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;
    
    cout<<endl;
    
    int i=3;
    int *s=&i;
    *s=*s+1;
    
    cout<<*s<<endl;
    cout<<"before: "<<s<<endl;
    s=s+1;
    cout<<"after: "<<s<<endl;
    
    return 0;

}