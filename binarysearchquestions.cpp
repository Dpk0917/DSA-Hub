#include<iostream>
using namespace std;

// int FirstOcc(int arr[],int size, int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
    
//     while(start<=end){
        
//         if(arr[mid]==key){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(key>arr[mid]){//right mei jao
//             start=mid+1;
//         }
//         else if(key<arr[mid]){//left mei jao
//             end=mid-1;
//         }
        
//         mid=start+(end-start)/2;
        
//     }
    
//     return ans;
// }

// int LastOcc(int arr[],int size, int key){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     int ans=-1;
    
//     while(start<=end){
        
//         if(arr[mid]==key){
//             ans=mid;
//             start=mid+1;
//         }
//         else if(key>arr[mid]){//right mei jao
//             start=mid+1;
//         }
//         else if(key<arr[mid]){//left mei jao
//             end=mid-1;
//         }
        
//         mid=start+(end-start)/2;
        
//     }
    
//     return ans;
// }

// int main(){
//     int even[6]={2,3,3,3,5,6};
    
//     int index=FirstOcc(even,6,3);
//     cout<<"the first index will be : "<< index << endl;
    
//     int Index=LastOcc(even,6,3);
//     cout<<"the last index will be : "<< Index << endl;
    
//     return 0;
// }



    // int TheFirstOccurance(int arr[],int size,int key){
    //     int start=0;
    //     int end=size-1;
    //     int ans=-1;
    //     int mid=start+(end-start)/2;
        
    //     while(start<=end){
            
    //         if(key==arr[mid]){
    //             ans=mid;
    //             end=mid-1;
    //         }else if(key<arr[mid]){
    //             end=mid-1;
    //         }else if(key>arr[mid]){
    //             start=mid+1;
    //         }
    //         mid=start+(end-start)/2;

    //     }
    //     return ans;
    // }
    
    
    // int TheLastOccrance(int arr[],int size,int key){
    //     int start=0;
    //     int end=size-1;
    //     int ans=-1;
    //     int mid=start+(end-start)/2;
        
    //     while(start<=end){
            
    //         if(key==arr[mid]){
    //             ans=mid;
    //             start=mid+1;
    //         }else if(key<arr[mid]){
    //             end=mid-1;
    //         }else if(key>arr[mid]){
    //             start=mid+1;
    //         }
    //         mid=start+(end-start)/2;

    //     }
    //     return ans;
    // }
    
    // int main(){
    //     int arr[7]={1,2,3,3,3,3,5};
        
        
    //     int n=TheFirstOccurance(arr,7,3);
    //     cout<<"The First Occurance of 3: "<<n<<endl;
    //     int m=TheLastOccrance(arr,7,3);
    //     cout<<"The Last Occurance of 3: "<<m<< endl;
    //     int ansmain=(m-n)+1;
    //     cout<<"The total no.of Occurance of 3: "<<ansmain<< endl;
        
    //     return 0;
    // }


// int ThePeakValue(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
    
//     while(start<end){
//         if(arr[mid]<arr[mid+1]){
//             start=mid+1;
//         }
//         else{
//             end=mid;
//         }
//         mid=start+(end-start)/2; 
//     }
//     return start;
// }



// int main(){
//     int arr[6]={1,2,6,5,2,1};
    
//     int max=ThePeakValue(arr,6);
//     cout<<max<< endl;
    
// }


int PivotIndex(int arr[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    int leftsum=0;
    for(int i=0;i<size;i++){
        int rightsum =total-leftsum-arr[i];
        if(leftsum==rightsum){
            return i;
        }
        leftsum+=arr[i];
    }

    return -1;
}

int main(){
    int arr[6]={1,7,3,6,5,6};
    int arr1[3]={1,2,3};
    int arr2[3]={2,1,-1};
    
    
    int Index1=PivotIndex(arr,6);
    int Index2=PivotIndex(arr1,3);
    int Index3=PivotIndex(arr2,3);        
    cout<<"The Pivot Index in 1: "<<Index1<< endl;
    cout<<"The Pivot Index in 2: "<<Index2<< endl;
    cout<<"The Pivot Index in 3: "<<Index3<< endl;
    
    
    return 0;
}
















