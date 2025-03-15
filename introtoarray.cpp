#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// void printArray(int arr[], int size){
//     cout<<"printing the array"<< endl;
//     //print the array
//     for(int i=0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"printing done"<< endl;
    
// }
// int main(){
    
//     //declare
//     int num[15];
//     //accessing an array
//     cout<<"value at 14 index "<< num[14]<< endl;
//     //initialising and array
    
//     int second[3]={5,7,9};
//     //accessing an element
//     cout<<"value of 2nd index "<< second[2] << endl;
    
//     int third[15]={9,12};
//     int n=15;
//     printArray(third,15);
//     // cout<<"printing the 3rd array: "<< endl;
    
//     // //print the array
//     // for(int i=0 ; i<n ; i++){
//     //     cout<<third[i]<<" ";
//     // }
    
//     cout<<endl;
    
//     int fourth[10]={0};
//     int a=10;
//     // cout<<"printing the 4th array: "<< endl;
//     // for(int i=0; i<a; i++){
//     //     cout<<fourth[i]<<" ";
//     // }
//     printArray(fourth,10);
    
//     cout<< endl;

//     //initialising all loacation with 1[not possible]
//     int fifth[10]={1};
//     int b=10;
//     // cout<<"printing the 5th array: "<< endl;
//     // for(int i=0; i<b ; i++){
//     //     cout<<fifth[i]<<" ";
//     printArray(fifth,10);
//     int fifthsize= sizeof(fifth)/sizeof(int);
//     cout<<"size of fifth is "<< fifthsize<< endl;
    
//     char ch[5]={'a','b','c','d','e'};
//     cout<< ch[3] << endl;
//     cout<<"printing the array"<< endl;
//     //print the array
//     for(int i=0 ; i<5 ; i++){
//         cout<<ch[i]<<" ";
//     }  
    
    
//     // printArray(ch,5);
//     // cout<<"printing the array"<< endl;
//     //print the array
//     // for(int i=0 ; i<5 ; i++){
//     //     cout<<ch[i]<<" ";
    
    
//     double firstDouble[5];
//     float firstFloat[6];
//     bool firstBool[7];
    
//     cout<<endl<<"everything is fine"<< endl<< endl;
    
//     return 0;
// }

    
    
    // int getmin(int num[], int n){
    //     int mini= INT_MAX;
        
    //     for(int i=0; i<n;i++){
            
    //         mini=min(mini,num[i]);
           
    //         // if(num[i]<min){
    //         //     min=num[i];
    //         // }
    //     }
    //     return mini;
    // }

    // int getmax(int num[], int n ){
        
    //     int maxi= INT_MIN;
        
    //     for (int i=0; i<n ; i++){
            
    //         maxi=max(maxi, num[i]);
    //         // if(num[i]> max){
    //         //     max=num[i];
    //       // }
    //     }
        
    //     return maxi;
    // }
    // int main(){
        
    //     int size;
    //     cin>>size;
        
    //     int num[100];
        
    //     //taking input
    //     for(int i=0 ; i<size ; i++){
    //         cin>>num[i];
    //     }
        
    //     cout<<"maximum value is "<<getmax(num,size)<< endl;
    //     cout<<"minimum value is "<<getmin(num,size)<< endl;
  
    //     return 0;
       
    // }
    
    
    
    // void update(int arr[], int size){
        
    //     cout<<"Inside the function"<< endl;
        
    //     //updating array First element 
    //     arr[0]=120;
        
      
      
        
    //     //printing the array
    //     for(int i=0 ; i<3; i++){
    //         cout<<arr[i]<<" ";
    //     }
        
    //     cout<<endl;
        
    //     cout<<"Going back to the main function"<< endl;
        
    // }
    
    // int main(){
        
    //     int arr[3]={1,2,3};
        
    //     update(arr,3);
        
    //     //printing the array
    //     cout<<"Printing the main  function"<< endl;
    //     for(int i=0 ; i<3; i++){
    //         cout<<arr[i];
    //     }
    //     cout<<endl;
        
    //     return 0;
    // }
    
    
    
    
    // int Arrsum(int Arr[] , int size){
    //     int sum=0;
    
    //     for(int i=0; i<size; i++){
    //         sum +=Arr[i];

    //  }
    //   return sum;
      
    // }
    
    // int main(){
        
    //     int Arr[5];
    //     for(int i=0; i<5 ; i++){
    //         cin>>Arr[i];
    //     }
    //     int totalsum=Arrsum(Arr,5);
        
    //     cout<<"the final sum will be "<< totalsum << endl;
        
    //     return 0;
    // }


    // bool search(int arr[],int size,int key){
        
    //     for(int i=0; i<size;i++){
    //         if(arr[i]==key){
    //             return 1;
               
    //         } 
    //     }
        
    //     return 0;   
        
    // }
    
    // int main(){
        
    //     int arr[10]={1,20,30,40,50,60,70,80,90};
        
        
    //     cout<<"enter the key"<< endl;
    //     int key;
    //     cin>>key;
        
        
    //     bool found=search(arr,10,key);
        
    //     if(found){
    //         cout<<"key is presnt"<< endl;
            
    //     }else{
    //         cout<<"key is not present"<< endl;
    //     }
    
    //     return 0;
        
    // }





    // void reverse(int arr[], int n){
        
    //     int start=0;
    //     int end=n-1;
        
    //     while(start<=end){
    //         swap(arr[start],arr[end]);
    //         start++;
    //         end--;
    //     }
    // }


    // void printArray(int arr[],int n){
        
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // int main(){
        
    //     int arr[6]={1,5,2,9,4,-4};
    //     int brr[5]={5,3,1,2,4};
    
    // reverse(arr,6);
    // reverse( brr,5);
    
    // printArray(arr,6);
    // printArray(brr,5);
    
    
    // return 0;
    // }
    
    
    
    
    void swapAlternate(int arr[],int size){
        for(int start=0; start<size-1 ; start+=2){
            swap(arr[start],arr[start+1]);
        }

    }

    void printArray(int arr[],int size){
        
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
            
        }
    }
    int main(){
        
        int arr[6];
        cout<<"enter the elements of arr"<< endl;
        for(int i=0; i<6 ; i++){
            cin>>arr[i];
        }
        
        
        int brr[5];
        cout<<"enter the elements of brr"<< endl;
        for(int i=0;i<5;i++){
            cin>>brr[i];
        }
        
        
        swapAlternate(arr,6);
        swapAlternate(brr,5);
         
        
        cout<<endl;
        cout<<"after swapping elements: "<< endl;
        printArray(arr,6);
        cout<<endl;
        printArray(brr,5);
        
        return 0;
        
    }
    
  
        
    
    
    
    
    
    
    
    









