#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int>v;
    cout<<"size of the vector "<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity of the vector "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"capacity of the vector "<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity of the vector "<<v.capacity()<<endl;
    
    cout<<"size of the vector "<<v.size()<<endl;
    
    cout<<"element at 2nd index "<<v.at(2)<<endl;
    
    cout<<"the first element "<<v.front()<<endl;
    
    cout<<"the last element "<<v.back()<<endl;
    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl; 
    
    v.pop_back();
    
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;
    
    vector<int>a(5,9);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int>b(a);
    for(int i:b){
        cout<<i<<" ";
    }
}