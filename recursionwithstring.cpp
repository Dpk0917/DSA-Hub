#include <iostream>
<<<<<<< HEAD
<<<<<<< HEAD
using namespace std;

// Function to reverse a string using recursion
// void reverse(int i, int j, string &name) {
//     cout << "Call received for: " << name << endl;
//     if (i > j) {
//         return;
//     }
//     swap(name[i], name[j]);
//     reverse(i + 1, j - 1, name);
// }

// int main() {
//     string name = "abcde";
//     reverse(0, name.length() - 1, name);
//     cout << "Reversed String: " << name << endl;
//     return 0;
// }

// Function to check if a string is a palindrome using recursion
// bool isPalindrome(string &str, int s, int e) {
//     if (s > e) {
//         return true;
//     }
//     if (str[s] != str[e]) {
//         return false;
//     }
//     return isPalindrome(str, s + 1, e - 1);
// }

// int main() {
//     string name = "code";
//     int ans = isPalindrome(name, 0, name.length() - 1);
//     if (ans) {
//         cout << "The string is a palindrome" << endl;
//     } else {
//         cout << "The string is not a palindrome" << endl;
//     }
//     return 0;
// }

// Function to calculate power using recursion
int power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    if (b == 1) {
        return a;
    }

    int ans = power(a, b / 2);

    // If b is even
    if (b % 2 == 0) {
        return ans * ans;
    } 
    // If b is odd
    else {
        return a * ans * ans;
    }
}

int main() {
    int a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;

    cout << "Result: " << power(a, b) << endl;
    return 0;
}
=======
=======
>>>>>>> 0db7eb1 (Added mergesort.cpp)

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


<<<<<<< HEAD
>>>>>>> 0db7eb1f0df2a734cdffa8307616fdee86d7d2a1
=======
>>>>>>> 0db7eb1 (Added mergesort.cpp)
