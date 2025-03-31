#include<iostream>

using namespace std;

inline int Getmax(int& a,int& b){
    return (a>b)?(a):(b);
}

int main(){
    
    int a=1,b=2;
    int ans=0,ans1=0;
    
    ans=Getmax(a,b); //means yaha ye aajayega (a>b)?(a):(b);
    cout<<ans<<endl;
    
    a=a+3;
    b=b+1;
    
    ans1=Getmax(a,b);
    cout<<ans1<<endl;
    
    
    return 0;
    
}