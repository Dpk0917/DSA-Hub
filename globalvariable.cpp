#include<iostream>

using namespace std;

int score=15;


void a(int& i){
    
    cout<<score<<" in int a "<<endl;
    cout<<i<<endl;
    //b(i);
    
}

void b(int& i){
    cout<<score<<" in int b "<<endl;
    cout<<i<<endl;
    
}


int main(){
    
    
    cout<<score<<" in int main a"<<endl;
    
    //this is the issue
    // score=score+1;
    // cout<<score<<" in int main b"<<endl;
    
    int i=5;
    a(i);
    b(i);
    
    
    
    return 0;
    
}