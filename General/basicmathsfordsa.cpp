#include <iostream>
#include <vector>
using namespace std;


//normal method

// bool isprime(int n){
//     if(n<=1){
//         return 0;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return 0;
//         }else{
//             return 1;
//         }
        
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
    
//     if(isprime(n)){
//         cout<<"the no. is a prime no "<<endl;
        
//     }else{
//         cout<<"the no. is not a prime no. "<<endl;
        
//     }
    
//     return 0;
// }



int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    
    int count=0;
   
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
        }for(int j=i*2;j<=n;j=j+i){
        prime[j]=0;
       }
     
 
}
cout<<count<<" ";
}
    