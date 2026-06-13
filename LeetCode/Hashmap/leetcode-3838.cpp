class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map<char,int>map;
        int i=0;
        for(char ch='a';ch<='z';ch++){
            map[ch]=weights[i];
            i++;
        }
        
        string ans;
        for(string word:words){
            int sum=0;
            for(char ch:word){
                sum+=map[ch];
            } 

            sum%=26;
            ans+=('z'-sum);

        }

        return ans;       
    }
};