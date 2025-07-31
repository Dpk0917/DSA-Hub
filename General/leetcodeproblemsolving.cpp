#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    // int num;
    // cin>>num;
    
    // int ans=0;
    
    // while(num!=0){
    //     int rem=num%10;
    //     ans=(ans*10)+rem;
    //     num=num/10;
    // }
    // cout<<ans<< endl;
    
    
//error    // int n;
    // cin>>n;
    
    // int ans=0;
    // int pow=1;
    
    // while(n!=0){
    //     int rem=n%2;
    //     n=n/2;
    //     ans+=(rem*pow);
    //     pow=pow*10;
    // }   
    // while(true){
    //     int rem=n%10;
    //     n=n/10;
    //     ans+=(rem*pow);
    //     n=n/10;
    //     pow=pow*2;
    // }
    // cout<< ans << endl;
    
  
  
  
  
  //wrong approach    // int n;
    // cin>>n;
    // int i=0;
    
    // if(n==0){
    //     cout<<"1"<<endl;
    // }    
    // else{
    //     i=n%2;
    //     if(i==0){
    //         cout<<"true"<< endl;
    //     }else{
    //         cout<<"false"<< endl;
    //     }
        
    // }
  
  
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans = pow(2,i);
        if(ans==n){
            cout<<"true"<<endl;
           }
       }
    cout<<"false"<<endl;
}
 
