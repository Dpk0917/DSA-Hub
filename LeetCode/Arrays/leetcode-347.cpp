class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>count;
        int ans=-1;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            count[ch]++;
        }

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(count[ch]==1){
                return i;
            }
        }

        return ans;
    }
};