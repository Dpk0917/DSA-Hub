class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n=words.size();
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                     int right=(i-startIndex+n) % n;
                     int left=(startIndex-i+n)%n;

                     ans=min(ans,min(right,left));

            }
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};