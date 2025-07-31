class Solution {
public:
    int maximumDifference(vector<int>& nums) {
                        
                        //optimal solution
        int n=nums.size();
        int minval=nums[0];
        int maxdiff=-1;

        for(int i=0;i<n;i++){
            if(nums[i]>minval){
                maxdiff=max(maxdiff,nums[i]-minval);
            }else{
                minval=nums[i];
            }
        }

        return maxdiff;
                        

                            //brute force
        // int n=nums.size();
        // int maxdiff=-1;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]<nums[j]){
        //           maxdiff=max(maxdiff,nums[j]-nums[i]);  
        //         }
                
        //     }
        // }

        // return maxdiff;
    }
};