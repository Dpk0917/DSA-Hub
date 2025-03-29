#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int>v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    v.push_back(12);
    
    cout<<"finding the element "<<binary_search(v.begin(),v.end(),9)<<endl;
    cout<<"lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    
    int a=4;
    int b=9;
    cout<<"max value "<<max(a,b)<<endl;
    cout<<"min value "<<min(a,b)<<endl;
    
    swap(a,b);
    cout<<"value a "<<a<<endl;
    cout<<"value b "<<b<<endl;
    
    string ab="abcd";
    reverse(ab.begin(),ab.end());
    cout<<"reverse string "<<ab<<endl;
    
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    sort(v.begin(),v.end());
    cout<<"after sort"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    
    
}