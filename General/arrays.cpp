#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int,4>a={9,12,22,15};
    int size=a.size();
    
    cout<<"element at 2nd index "<<a.at(2)<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"the first element "<<a.front()<<endl;
    cout<<"the last element "<<a.back()<<endl;
    
    
}