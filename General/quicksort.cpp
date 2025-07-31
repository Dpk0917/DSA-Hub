#include <iostream>
using namespace std;

int partition(int arr[],int s, int e,int n){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<pivot){
            count++;
            
        }
    }
    int pivotindex=s+count;
    swap(arr[pivotindex],arr[s]);
    
    
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;
    
}
void quicksort(int arr[],int s,int e,int n){
    if(s>=e){
        return ;
    }
    int p=partition(arr,s,e,n);
    
    
    quicksort(arr,s,p-1,n); //for left par
    quicksort(arr,p+1,e,n); //for right part
    
}
int main(){
    int arr[]={3,1,4,5,2};
    int s=0;
    int n=5;
    int e=n-1;
    
    quicksort(arr,s,e,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}