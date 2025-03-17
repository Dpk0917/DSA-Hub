#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int>vec(5,9);
    // cout<<"size="<<vec.size()<< endl;
    // for(int i : vec){
    //     cout<< i <<" "; 
    // }  
    // cout<<endl;
    // vector<char>vec1={'s','a','k','s','h','i'};
    // cout<<"size="<<vec1.size()<<endl;
    // for(char val : vec1){
    //     cout<< val <<endl;
    // }
    
    
    // vector<int>dpk;
    // cout<<"size ="<<dpk.size()<< endl;
    // dpk.push_back(22);
    // dpk.push_back(12);
    // dpk.push_back(9);
    // for(int val : dpk){
    //     cout<< val << endl;
    // }
    
    // dpk.pop_back();
    // cout<<"new vector: "<<endl;
    // for(int val : dpk){
    //     cout<< val << endl;
    // }
    
    // cout<<"the front no: "<< dpk.front() << endl;
    // cout<<"the back no: "<< dpk.back() << endl;
    // cout<<"using at: "<< dpk.at(0)<< endl;
    // cout<<"size after push back function= "<<dpk.size()<< endl;
    
    
    
    vector<int>vec;

    vec.push_back(9);
    vec.push_back(12);
    vec.push_back(22);
    
    cout<<"size: "<< vec.size()<< endl;
    cout<<"capacity: "<<vec.capacity() << endl;
    
    return 0;
}