#include <iostream>
#include <vector>
#include<limits>
using namespace std;

bool ifpossible(int arr[],int n,int m,int mid){
    int student=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum + arr[i] <=mid){
            pagesum+=arr[i];
        }else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
                
            }else{
                pagesum=arr[i];
                
            }
        }
        
    }
    return true;
}
int Bookallocation(int arr[],int n,int m){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(ifpossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
            
        }
        
    }
    return ans;
}

int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m;
    cout<<"enter the value of m: "<<endl;
    cin>>m;
    if(m>n){
        cout<<"Number of students must be greater then no. of books"<< endl;
        return -1;
    }
    cout<<"the no. will be: "<<Bookallocation(arr,n,m)<<endl;
    
    return 0;
    
}









