class Solution {
    private: int search(vector<int>& nums,int target,int s,int e){
        if(nums.size()==0){
            return 0;
        }if(s>e){
            return s;
        }int mid=s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }if(nums[mid]<target){
            return search(nums,target,mid+1,e);
        }else{
            return search(nums,target,s,mid-1);
        }
    
    }
    
    public:
        int searchInsert(vector<int>& nums, int target) {
            int s=0;
            int e=nums.size()-1;
            int ans=search(nums,target,s,e);
            
            return ans;
    }
    };