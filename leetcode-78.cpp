class Solution {
private: void solve(vector<int>& nums,vector<int>output,int index,vector<vector<int>>&ans){

    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }

    //excluding
    solve(nums,output,index+1,ans);

    //including
    int element=nums[index];
    output.push_back(nums[index]);
    solve(nums,output,index+1,ans);

}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans; //sare output isme store honge
        vector<int>output; 
        int index=0;
        solve(nums,output,index,ans);
        return ans;
    }
};