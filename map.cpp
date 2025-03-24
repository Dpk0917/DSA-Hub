#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,string>m;
    
    m[1]="deepak";
    m[2]="sakshi";
    m[9]="us";
    m.insert({5,"together"});
    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"the element 5 present or not "<<m.count(5)<<endl;
    m.erase(5); 
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    
    
}
