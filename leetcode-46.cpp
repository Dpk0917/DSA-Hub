class Solution {
private:
void solve(vector<int> nums,int index,vector<vector<int>>&ans){

    if(index>=nums.size()){
        ans.push_back(nums);
        return ;
    }

    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve(nums,index+1,ans);

        //joh swap kiya tha usse wapis phele jaisa krne ke liye kyuki hume isme main nums mei hee change kr rahe hai 
        swap(nums[index],nums[i]); 

    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,index,ans);

        return ans;

    }
};