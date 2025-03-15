#include <iostream>
using namespace std;

int main(){
    
        
    int amount;
    cout<<"enter amount"<< endl;
    cin>>amount;
    
    int a;
    
    int num=1;
    
    cout<<endl;
    switch(num){
        
        case 1: switch(num){
            case 1: a=amount/100;
            cout<<"no. of 100 ruppee note required "<< a << endl;
            break;
            
            case 2: a<=0;
            break;
        }
        case 2: switch(num){
            case 1: a=amount/50;
            cout<<"no. of 50 ruppee note required "<< a << endl;
            break;
            
            case 2: a<=0;
            break;
        }    
        case 3: switch(num){
            case 1: a=amount/10;
            cout<<"no. of 10 ruppee note required "<< a << endl;
            break;
            
            case 2: a<=0;
            break;
        }
        case 4: switch(num){
            case 1: a=amount/1;
            cout<<"no. of 1 ruppee note required "<< a << endl;
            break;
            
            case 2: a<=0;
            break;
        }
        
        default : cout<<"enter valid amount"<< endl;
        break;
    }
  cout<<endl;
  return 0;
   
    
}