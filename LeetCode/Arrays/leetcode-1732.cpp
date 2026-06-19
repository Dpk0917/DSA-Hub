class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>ans(n+1,0);
        ans[0]=0;

        for(int i=1;i<=n;i++){
            ans[i]=ans[i-1]+gain[i-1];
        }

        int maxi=INT_MIN;
        for(int i=0;i<=n;i++){
            maxi=max(maxi,ans[i]);
        }

        return maxi;
    }
};