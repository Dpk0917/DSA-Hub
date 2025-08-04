class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>Roman={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() && Roman[s[i]]<Roman[s[i+1]]){
                ans-=Roman[s[i]];
            }else{
                ans+=Roman[s[i]];
            }
        }

        return ans;
    }
};