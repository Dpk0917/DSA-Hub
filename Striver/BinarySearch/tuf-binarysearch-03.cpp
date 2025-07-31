class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int s=0;
        int ans=nums.size();
        int e=ans-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]>x){
                e=mid-1;
                ans=mid;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
};