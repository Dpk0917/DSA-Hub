class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.length()!=t.length()){
        //     return false;
        // }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // return s==t;



        if(s.length()!=t.length()){
            return false;
        }

        unordered_map<int,int>mp;

        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        for(int i=0;i<t.length();i++){
            mp[t[i]]--;
        }

        for(auto it:mp){
            if(it.second!=0){
                return false;
            }
        }

        return true;
    }
};