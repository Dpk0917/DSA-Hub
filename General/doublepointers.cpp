#include <iostream>

using namespace std;

// void update(int **ptr2){
    
//     //ptr2=ptr2+1;
    
//     //*ptr2=*ptr2+1;
    
//     **ptr2=**ptr2+1;
    
 //}   

int main() {
    
    int i=5;
    int *ptr=&i;
    int **ptr2=&ptr;
    
    
    cout<<"The value of ptr: "<<ptr<<endl;
    cout<<"The address of ptr: "<<&ptr<<endl;
    cout<<"The value of ptr2: "<<*ptr2<<endl;
    cout<<"The value of i: "<<i<<endl;
    cout<<"The value of i: "<<*ptr<<endl;
    cout<<"The value of i: "<<**ptr2<<endl;
    
    cout<<endl;
    
    cout<<"the value at ptr: "<<ptr<<endl;
    cout<<"The value of ptr: "<<&i<<endl;
    cout<<"The value of ptr: "<<*ptr2<<endl;
    
    cout<<endl;
    
    cout<<"The value of ptr2: "<<&ptr<<endl;
    cout<<"The value of ptr2: "<<ptr2<<endl;
    
 
    
    // cout<<"before: "<<i<<endl;
    // cout<<"before: "<<ptr<<endl;
    // cout<<"before: "<<ptr2<<endl;
    
    // cout<<endl;
    // update(ptr2);
    // cout<<"after: "<<i<<endl;
    // cout<<"after: "<<ptr<<endl;
    // cout<<"after: "<<ptr2<<endl;
 
 
 
 
    // int first=8;
    // int second=18;
    // int *p=&second;
    // *p=9;
    // cout<<first<<" "<<second<<endl;
 
 
    
    // int first=6;
    // int *p=&first;
    // int *q=p;
    // (*q)++;
    // cout<<first<<endl;
    
 
    
    // int first=8;
    // int *p=&first;
    // cout<<(*p)++<<" ";
    // cout<<first<<endl;
    
    
    
    // int *p=0;
    // int first=110;
    // *p=first;
    // cout<<first<<endl;
 
    return 0;
}