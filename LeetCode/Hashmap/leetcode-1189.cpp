class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string target = "balloon";

        unordered_map<char,int>maps;
        unordered_map<char,int>mapt;

        for(char item:text){
            maps[item]++;
        }

        for(char item:target){
            mapt[item]++;
        }

        int ans=INT_MAX;

        for (auto &it : mapt) {
            char ch = it.first;
            ans = min(ans, maps[ch] / it.second);
        }

        return ans;
        
    }
};