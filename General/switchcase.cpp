#include <iostream>
using namespace std;

int main(){
    
    // int num=2 ;
    
    // cout<<endl;
    // switch(num){
        
    //     case 1: cout<<"First"<< endl;
    //     break;
        
    //     case 2: cout<< "Second"<< endl;
    //     break;
        
    //     default: cout<< "It is default case"<< endl;
    // }
    
    // cout<< endl;
    //  return 0; 
 
 
    
    // char ch ='1' ;
    
    // cout<<endl;
    // switch(ch){  
        
    //     case 1: cout<<"First"<< endl;
    //     break;
        
    //     case'1': cout<< "Character first"<< endl;
    //     break;
        
    //     default: cout<< "It is default case"<< endl;
    // }
    // cout<< endl;
    // return 0; 
    
    
    
    
    
    // char ch ='1' ;
    // int num=1;
    
    // cout<<endl;
    // switch(ch){  
        
    //     case 1: cout<<"First"<< endl;
    //     break;
        
    //     case'1': switch(num){
    //         case 1: cout<< "value of num" << num << endl;
    //         break;
    //     }
    //     break;
        
    //     default: cout<< "It is default case"<< endl;
    // }
    // cout<< endl;
    // return 0; 
    
    
    
    ////pow(a,b)
    
    int a,b;
    
    cin >> a >> b;
    
    int ans=1;
    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    
    cout<<"answer is "<< ans << endl;
    
    int c,d;
    
    cin >> c >> d;
    
     ans=1;
    for(int i=1; i<=d; i++){
        ans=ans*a;
    }
    
    cout<<"answer is: "<< ans << endl;
    
    return 0;
    
    
}