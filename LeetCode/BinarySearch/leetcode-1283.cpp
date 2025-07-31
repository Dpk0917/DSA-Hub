class Solution {
private:
    int possibleAnswer(vector<int>& nums,int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=(nums[i]+mid-1)/mid;
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int high=maxi;

        int ans=-1;

        while(low<=high){
            int mid=low+(high-low)/2;

            int sum=possibleAnswer(nums,mid);

            if(sum<=threshold){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            
        }

        return ans;

    }
};