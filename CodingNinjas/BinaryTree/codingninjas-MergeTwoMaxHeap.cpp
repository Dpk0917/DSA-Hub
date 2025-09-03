#include <bits/stdc++.h> 
void heapify(vector<int>&ans,int n,int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        
        if(left<n && ans[largest]<ans[left]){
            largest=left;
        }if(right<n && ans[largest]<ans[right]){
            largest=right;
        }
        
        if(largest!=i){
            swap(ans[largest],ans[i]);
            heapify(ans,n,largest);
        }
    }
vector<int> mergeHeap(int n, int m, vector<int> &arr1, vector<int> &arr2) {
    // Write your code here
    vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(arr1[i]);
        }
        
        for(int i=0;i<m;i++){
            ans.push_back(arr2[i]);
        }
        
        int size=ans.size();
        
        for(int i=size/2-1;i>=0;i--){
            heapify(ans,size,i);
            
        }
        return ans;
}