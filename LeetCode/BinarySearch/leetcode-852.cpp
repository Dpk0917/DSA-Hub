class Solution {
    private: int found(vector<int>& arr,int s,int e){
        if(arr.size()==0){
            return 0;
        }if(s==e){
            return s;
        }
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            return found(arr,mid+1,e);
        }else{
            return found(arr,s,mid); 
        }
    };
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int s=0;
            int e=arr.size()-1;
            int ans= found(arr,s,e);
            return ans;  
    }
    };