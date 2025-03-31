#include <iostream>

using namespace std;

// bool isSorted(int *arr,int size){
//     if(size==0 || size==1){
//         return 1;
//     }if(arr[0]>arr[1]){
//         return 0;
//     }else{
//         bool remainingpart=isSorted(arr+1,size-1);
//         return remainingpart;
//         return 1;
//     }
    
// }

// int main(){
    
//     int arr[6]={4,6,9,12,22,22};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     int ans=isSorted(arr,size);
//     if(ans){
//         cout<<"array is sorted"<<endl;
//     }else{
//         cout<<"array is not sorted"<<endl;
//     }
    
    
//     return 0;
// }




// int arraySum(int *arr,int size){
    
//     if(size==0){
//         return 0;
//     }
    
//     int ans=arr[0]+arraySum(arr+1,size-1);
    
//     return ans;   
// }

// int main(){
//     int arr[6]={4,6,9,12,22,22};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     int ans=arraySum(arr,size);
    
//     cout<<"the sum is: "<<ans<<endl;
    
//     return 0;
    
// }
    
    
    
    
// void printingaArray(int *arr,int size){
    
//     cout<<"The size of array: "<<size<<endl;
    
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
        
//     }cout<<endl;
    
    
// }    
    
// bool isFound(int *arr,int size,int key){
//         printingaArray(arr,size);
        
//         if(size==0){
//             return 0;
            
//         }if(arr[0]==key){
//             return 1;
            
//         }else{
//             bool remainingpart=isFound(arr+1,size-1,key);
            
//             return remainingpart;
//         }
     
//     }
   
//     int main(){
//         int arr[6]={4,6,9,12,22,22};
//         int size=sizeof(arr)/sizeof(arr[0]);
        
//         int key=12;
        
//         int ans=isFound(arr,size,key);
        
//         if(ans){
//             cout<<"The key is found"<<endl;
            
//         }else{
//             cout<<"The key is not found"<<endl;
//         }
//         return 0;
//     }






void print(int arr[],int s,int e){
    
    
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
     
}

bool binarysearch(int *arr,int start,int size,int end,int key){
    
    print(arr,start,end);
    if(start>end){
        return 0;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return 1;
    }if(arr[mid]<key){
        return binarysearch(arr,mid+1,size,end,key);
        
    }else{
        return binarysearch(arr,start,size,mid-1,key);
    }
    
}


int main(){
        int arr[6]={4,6,9,12,22,22};
        int size=sizeof(arr)/sizeof(arr[0]);
        int key=22;
        int s=0;
        int e=size-1;
        
        int ans=binarysearch(arr,s,size,e,key);
        if(ans){
            cout<<"Element found"<<endl;
        }else{
            cout<<"Element not found"<<endl;
        }
        return 0;
        
}