#include <iostream>
#include <array>
#include <vector>

using namespace std;

// vector<int>reverse(vector<int>v){
//     int start=0;
//     int size=v.size();
//     int end=v.size()-1;
  
//     while(start<=end){
//             swap(v[start],v[end]);
//             start++;
//             end--;
//         }
//     return v;
// }

// void print(vector<int>v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

// int main(){
//     vector<int>v;
    
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(1);
    
//     int size=v.size();
    
//     vector<int>ans=reverse(v);
    
//     print(ans);
//     return 0;
// }





// void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
//     int i=0,j=0;
//     int k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             k++;
//             i++;
            
//         }else{
//             arr3[k]=arr2[j];
//             k++;
//             j++;
            
//         }
//     } 
    
//     while(i<n){
//         arr3[k]=arr1[i];
//         k++;
//         i++;
//     }
//      while(j<m){
//         arr3[k]=arr2[j];
//         k++;
//         j++;
//     }
// }

// void print(int ans[],int n){
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){
    
//     int arr1[3]={1,2,3};
//     int arr2[3]={2,5,6};
    
//     int arr3[6]={0}; 
    
// merge(arr1,3,arr2,3,arr3);
    
//     print(arr3,6);

//     return 0;
// }



int main(){
    
    int arr[]={9,0,12,0,22,4,0,0};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int i=0;
    int end=size-1;
    for(int j=0;j<size;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

