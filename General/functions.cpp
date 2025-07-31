#include <iostream>
using namespace std;

// int power(){
//     int a, b;
//     cin>>a>>b;
    
//     int ans=1;
    
//     for(int i=1 ; i<=b ; i++){
//         ans=ans*a;
//     }
    
//     return ans;
    
// }

// int main(){

//     // int c,d;
//     // cin>>c>>d;
    
//     // int answer = power(c,d);
    
//     // cout<< "answer will be "<< answer << endl;
//     // return 0;
    
//     int ans=power();
//     cout<<"answer will be"<< ans <<endl;
    
//     return 0;




//1->isEven
//0->isOdd
    // bool isEven(int a){
    //     //odd
    //     if(a&1){
    //         return 0;
            
    //     }
    //     else{//even
    //         return 1;
    //     }
        
    // }
    // int main(){
        
    //     int num;
    //     cin>>num;
        
    //     if(isEven(num)){
    //         cout<<"Number is even"<< endl;
    //         }
    //     else{
    //         cout<<"Number is odd"<< endl;
    //     }
        
        
        
        
// int factorial(int n) {  
//     int fact = 1;  

//     for (int i = 1; i <= n; i++) {  
//         fact = fact * i;  
//     }  

//     return fact;  
// }  

// int nCr(int n, int r) {  
//     int num = factorial(n);  
    
//     int denom = factorial(r) * factorial(n - r);  
    
//     int ans = num / denom; // corrected syntax here, no need for int before num/denom  
//     return ans;  
// }  

// int main() {  
//     int n, r;  
//     cin >> n >> r;  

//     int answer = nCr(n, r);  
//     cout << "answer will be " <<answer<< endl; // added output to see the result  
//     return 0;  

    
    
    
    
    // //functionsignature
    // void printCounting(int n){
    //     //function body
    //     for(int i=1 ; i<=n ; i++){
    //         int ans=i;
    //         cout<<i<<" ";
            
    //     }
    // }
    
    // int main(){
    //     int n;
    //     cin>>n;
    //     //function call
    //     printCounting(n);
    //     return 0;
    // }
    
    //1->prime
    //0->non prime
    
    //     bool isPrime(int n){
    //     for(int i=2 ; i<n ; i++){
    //         if(n%i==0){
    //             return 0;
                
    //     }
    //     }
    //     return 1;
    // }

    //     int main() {
        
    //     int n;
    //     cin>>n;
        
    //     if(isPrime(n)){
    //         cout<<"is a prime no."<< endl;
    //     }
    //     else{     
        
    //     cout<<"is a not a prime no."<< endl;
    //     }
    
    // }
    
    
    
    
    
    
    // int Ap(){
        
    //     int n;
    //     cin>>n;
    //     int ans=((3*n)+7);
    //     cout<<"the value of nth term "<< ans << endl;
    //     return 0;
    // }
    
    // int main(){
    //     int answer= Ap();

    //     return 0;
    // }
    
    
    
    
    // int Dec(int a){
        
    //     int ans=0;
    //     int pow=1;
    //     while(a>0){
    //         int rem=a%2;
    //         a=a/2;
    //         ans+=(rem*pow);
    //         pow=pow*10;
    //     } 
    //     return ans;
    // }
    
   
   
   
   
   
    // int No1(int a){
        
    //     int result=0;
    //     while(a>0){
    //         if (a & 1){
    //             result++;
    //         }
    //         a=a>>1;
    //   }
    // return result;
    // }
    
    // int No2(int b){
        
    //     int result1=0;
    //     while(b>0){
    //         if (b & 1){
    //             result1++;
    //         }
    //         b=b>>1;
    //   }
    // return result1;
    // }

    // int main(){
        
    //     int a,b;
    //     cout<<"Enter the no. a: "<< endl;
    //     cin>>a;
    //     cout<<"Enter the no. b: "<< endl;
    //     cin>>b;
    //     int CountOfOnes=No1(a);
    //     int CountOfOne=No2(b);
    //     cout<<"no. of 1 will be: "<< CountOfOnes+CountOfOne << endl;

    //     return 0;
    // }    
    
    
    
    // void dummy(int n){
    //     n++;
    //     cout<<"n is: "<< n << endl;
    // }
    
    // int main(){
        
    //     int n;
    //     cout<<"enter the value of n "<< endl;
    //     cin>>n;
        
    //     dummy(n);
    //     cout<<"number n is: "<< n << endl;
        
    //     return 0;
    // }
    
    
    // void update(int a){
    //     a=a/2;
    // }
    // int main(){
    //     int a=10;
    //     update(a);
    //     cout<<a<< endl;
        
    // }
    
    
    // int update(int a){
    //     a -=5;
    //     return a;
    // }
    
    // int main(){
    //     int a=15;
    //     update(a);
    //     cout<<a<< endl;
    // }
    
    
    int update(int a){
        int ans=a*a;
        return ans;
        
    }
    
    int main(){
        int a=14;
        a=update(a);
        cout<<a<< endl;
    }
    
    
    
    
    
    
    
    
    