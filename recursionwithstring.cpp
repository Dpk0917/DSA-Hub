#include <iostream>

using namespace std;




// void reverse(int i,int j,string &name){
    
//     cout<<"call  recieved for "<<name<<endl;
//     if(i>j){
//         return;
//     }
//     swap(name[i],name[j]);
//     i++;
//     j--;
    
//     reverse(i,j,name);
// }


// int main(){
    
//     string name="abcde";
//     reverse(0,name.length()-1,name);
//     cout<<name<<endl;
    
//     return 0;
// }




// bool isPalindrome(string &str,int s,int e){
    
//     if(s>e){
//         return 1;
//     }
//     if(str[s]!=str[e]){
//         return 0;
//     }else{
//         return isPalindrome(str,s+1,e-1);
//     }
   
// }

// int main(){
//     string name="code";
//     int ans=isPalindrome(name,0,name.length()-1);
//     if(ans){
//         cout<<"The string is palindrome"<<endl;
        
//     }else{
//         cout<<"The string is not palindrome"<<endl;
        
//     }
//     return 0;
    
// }




// int power(int a,int b){
    
//     if(b==0){
//         return 1;
//     }if(b==1){
//         return a;
//     }
//     int ans=power(a,b/2);
    
//     //for even condition
//     if(b%2==0){
//         return ans*ans;
        
//     }else{
//         return a*(ans*ans);
//     }
    
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
    
//     int ans=power(a,b);
    
//     cout<<ans<<endl;
//     return 0;
    
// }


