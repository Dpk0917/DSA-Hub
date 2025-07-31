#include <iostream>
using namespace std;

int binarysearch(int *arr,int start,int end,int key){
    if(start>end){
        return -1;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return mid;
    }if(arr[mid]<key){
        return binarysearch(arr,mid+1,end,key);
    }else{
        return binarysearch(arr,start,mid-1,key);
    }
  
}    

int search(vector<int> &nums, int target) {
    int size=nums.size();
    int ans=binarysearch(nums.data(),0,size-1,target);

    return ans;
}
