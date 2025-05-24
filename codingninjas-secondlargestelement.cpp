#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr) {
    int largest=INT_MIN,secondLargest=INT_MIN;
    
    for(int i = 0; i < n; i++){
        if (arr[i] > largest) largest = arr[i];
    }
    
    for(int i=0;i<n;i++) {
        if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest=arr[i];
        }
    }
    
    if(secondLargest==INT_MIN){
        return -1;
    }
    return secondLargest;
}
