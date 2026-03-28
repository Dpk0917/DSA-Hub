class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }

        char ans;

        for(int i=0;i<t.length();i++){
            map[t[i]]--;
            if(map[t[i]]<0){
                ans+=t[i];
            }
        }


        return ans;
    }
};