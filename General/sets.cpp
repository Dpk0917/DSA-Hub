#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int>s;
    
    s.insert(9);
    s.insert(9);
    s.insert(9);
    s.insert(12);
    s.insert(12);
    s.insert(12);
    s.insert(22);
    s.insert(22);
    s.insert(22);
    
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    
    set<int>::iterator it=s.begin();
    it++;
    
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"the element 5 is present or not "<<s.count(5)<<endl;
    
    
    
    
}