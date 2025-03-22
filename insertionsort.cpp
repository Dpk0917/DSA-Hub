#include <iostream>
using namespace std;

//using while loop

// int main(){
//     int arr[]={10,1,7,4,8,2};
//     int size=sizeof(arr)/sizeof(arr[0]);
    
//     for(int i=1;i<size;i++){
//         int temp=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>temp){
//             arr[j+1]=arr[j];
//             j--;
//             }
//             arr[j+1]=temp;
            
//         }
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//     }

//     return 0;    
// }


//with for loop

int main(){
    int arr[]={10,1,7,4,8,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
     
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        
    }

    return 0;
}