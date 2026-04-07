class Solution {
public:
    int M=1e9+7;
    int reverse(int num){
    int rev=0;
    while(num!=0) {
        int digit=num%10;     // get last digit
        rev=rev*10+digit;   // build reversed number
        num=num/10;           // remove last digit
    }

    return rev;

    }
    int countNicePairs(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int rev=reverse(nums[i]);
            nums[i]=nums[i]-rev;
        }
        
        unordered_map<int,int>map;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=(ans+map[nums[i]])%M;
            map[nums[i]]++;
        }

        return ans;
    }
};