#include <iostream>
using namespace std;

// void merge(int *arr,int s,int e){
    
//     int mid=s+(e-s)/2;
//     int len1=mid-s+1; //left wale part ki length
//     int len2=e-mid;//right wale part ki length

//     int *first=new int[len1];//array bana liya ek len1 ke size ka
//     int *sec=new int[len2];//array bana liya ek len2 ke size ka
    
//     //copy value on first array (mid se phli wali)
//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k];
//         k++;
//     }
    
//     //copy value on sec array (mid kee badh wali)
//     int mainarrayindex=mid+1;
//     for(int i=0;i<len2;i++){
//         sec[i]=arr[mainarrayindex];
//         mainarrayindex++;
//     }
    
//     //merge 2 sorted array krenge yaha
//     int index1=0;
//     int index2=0;
    
//     mainarrayindex=s;
    
//     while(index1<len1 && index2<len2){
//         if(first[index1]<sec[index2]){
//             arr[mainarrayindex++]=first[index1++];
//         }else{
//             arr[mainarrayindex++]=sec[index2++];
//         }
        
//     }
//     while(index1<len1){
//         arr[mainarrayindex++]=first[index1++];
//     }while(index2<len2){
//         arr[mainarrayindex++]=sec[index2++];
//     }
//     delete []first;
//     delete []sec;
// }
// void mergesort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }int mid=s+(e-s)/2;
    
//     mergesort(arr,s,mid);//left part sort ke liye
    
    
//     mergesort(arr,mid+1,e);//right part ke liye
    
//     merge(arr,s,e);
    
// }
// int main(){
//     int arr[5]={9,8,5,6,3};
//     int n=5;
    
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }




// void insertionsort(int arr[], int n, int index) {
//     // Base case: If index reaches the end, return
//     if (index == n) {
//         return;
//     }

//     int key = arr[index];
//     int j = index - 1;

//     // Shift elements of arr[0..index-1], that are greater than key
//     while (j >= 0 && arr[j] > key) {
//         arr[j + 1] = arr[j];
//         j--;
//     }
    
//     // Insert the element at its correct position
//     arr[j + 1] = key;

//     // Recursive call for the next element
//     insertionsort(arr, n, index + 1);
// }

// int main() {
//     int arr[5] = {9, 8, 5, 6, 3};
//     int n = 5;

//     insertionsort(arr, n, 1); // Start sorting from index 1

//     // Print sorted array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




int findMinIndex(int arr[], int start, int n) {
    int minIndex = start;
    for (int i = start + 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

void selectionSortRecursive(int arr[], int start, int n) {
    // Base case: If we have reached the last element, return
    if (start >= n - 1) {
        return;
    }

    // Find the minimum element in the unsorted portion
    int minIndex = findMinIndex(arr, start, n);

    // Swap the found minimum element with the first element of the unsorted part
    swap(arr[start], arr[minIndex]);

    // Recursively sort the remaining elements
    selectionSortRecursive(arr, start + 1, n);
}

int main() {
    int arr[5] = {9, 8, 5, 6, 3};
    int n = 5;

    selectionSortRecursive(arr, 0, n); 
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
