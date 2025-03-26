#include <iostream>
#include <string>
using namespace std;

// int getlength(char name[]){
//     int count =0;

//     for(int i=0;name[i] != '\0';i++){
//         count++;
//     }
//     return count;
// }

// void reversestring(char name[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//             swap(name[s],name[e]);
//             s++;
//             e--;
//     }

// }
// bool checkpalindrome(char name[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         if(name[s]!=name[e]){
//             return 0;
//         }else{
//             s++;
//             e--;
           
//         }

//     }
//     return 1;
    
// }

// char tolowercase(char name){
//     if(name>='a' && name<='z'){
//         return name;
//     }else{
//         char temp= name-'A'+'a';
//         return temp;
//     }
// }


// int main(){
//     char name[20];
    
//     cout<<"enter your name "<<endl;
//     cin >> name;
//     //name[2]='\0';

//     cout<<"your name is "<<name<<endl;

//     int len=getlength(name);

//     cout<<"length of the string "<<len<<endl;

//     reversestring(name,len);
//     cout<<"your name is "<<name<<endl;

//     cout<<"palindrome or not "<<checkpalindrome(name,len)<<endl;
//     cout<<"the character is "<<tolowercase('b')<<endl;
//     cout<<"the character is "<<tolowercase('C')<<endl;

//     cout<<"namste duniya"<<endl;


//     return 0;


// }


// int main(){
    
//     string s={'M','y',' ','n','a','m','e'};
//     int start=0;
//     int end=s.length()-1;
    
//     while(start<end){
//         swap(s[start],s[end]);
//         start++;
//         end--;
        
//     }
//     cout<<s;
    
// }


char getmaxoccucharacter(string s){
    int arr[26]={0};
    int number=0;
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>='a' && ch<='z'){
            number=ch-'a';
            
             
        }else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
            
        }
    }
    char finalans='a'+ans;
    return finalans;
}

int main(){
    string s;
    cin>>s;
    
    cout<<"max occured letter: "<<getmaxoccucharacter(s)<<endl;
    return 0;
}





