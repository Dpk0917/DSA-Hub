#include <iostream>
#include <cmath>
using namespace std;


// int factorial(int n){
  
//   if(n==0){
//       return 1;
       
//   } 
   
//   int small=factorial(n-1);
//   int  big=n*small;
//   return big;
   
// }
// int main(){
    
//     int n;
//     cout<<"Enter value of n: "<<endl;
//     cin>>n;
    
//     int ans=factorial(n);
//     cout<<"The factorial is: "<<ans<<endl;
//     return 0;
    
// }

// int power(int i,int n){
    
//     if(n==0){
//         return 1;
//     }
    
//     int smallerfunction=pow(i,n-1);
//     int biggerfunction=i*smallerfunction;
    
//     return biggerfunction;
    
// }

// int main(){
    
//     int i;
//     cout<<"Enter the number: "<<endl;
//     cin>>i;
    
//     int n;
//     cout<<"Enter the power: "<<endl;
//     cin>>n;
    
//     int ans=power(i,n);
    
//     cout<<"The answer is: "<<ans<<endl;
    
    
//     return 0;
// }


int printing(int i){
    
    if(i==0){
        return 1;
    }
    
    //recursive relation
    printing(i-1);
    
    cout<<i<<" ";
}


int main(){
    
    int p;
    cout<<"Enter the no.: "<<endl;
    cin>>p;
    
    printing(p);
    
    
    return 0;
    
}
