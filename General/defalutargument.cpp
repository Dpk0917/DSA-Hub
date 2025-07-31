#include<iostream>

using namespace std;

void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    
    int arr[5]={9,12,22,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    print(arr,size,2);
    
    return 0;
}