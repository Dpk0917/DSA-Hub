class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int j=0;

        for(int num=1;num<=n;num++) {
            ans.push_back("Push");

            if(num==target[j]){
                j++;
                if(j==target.size())
                    break;
            }else{
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};