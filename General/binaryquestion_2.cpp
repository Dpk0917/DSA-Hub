#include <iostream>
using namespace std;


// int getpivot(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
    
//     while(start<end){
//         if(arr[mid]>=arr[0]){
//             start=mid+1;
//         }else{
//             end=mid;
//         }
//         mid=start+(end-start)/2;
        
//     }
//     return start;
// }

// int main(){
//     int arr[5]={8,10,17,1,3};
    
//     cout<<"the pivot is: "<<getpivot(arr,5)<<endl;
    
//     return 0;
// }



// int RoatedSortedArray(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
    
//     int  ans=0;
//     while(start<end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==key){
//             ans=mid;
//             return ans;
//         }else if(arr[mid]<key){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return -1;
// }

// int main(){
    
//     int arr[6]={11,13,5,8,9,10};
//     int answer=RoatedSortedArray(arr,6,5);
    
//     cout<<"the answer will be: "<<answer<< endl; 
    
//     return 0;
// }



    long long int sqrtInteger(int n){
        int start=0;
        int end=n;
        long long int ans=-1;
        while(start<=end){
            long long int mid=start+(end-start)/2;
            long long int square=mid*mid;
            if(square==n){
                return mid;
            }else if(square < n){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
    
    double Precise(int n,int Precision,int  tempSoln){
        double factor=1;
        double ans=tempSoln;
        for(int i=0;i<Precision;i++){
            factor=factor/10;
            for(double j=ans; j*j<=n ; j+=factor){
                ans=j;
                
            }
        }
        return ans;
    }
    int main(){
        int n;
        cout<<"Enter the number:  "<< endl;
        cin>>n;
        
        int tempSoln=sqrtInteger(n);
        cout<<"The precise answer is: "<< Precise(n,3,tempSoln)<<endl;
        
        
        return 0;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    