class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;

        for(char c:s){
            freq[c]++;
        }


        priority_queue<pair<int,char>> maxheap;
        // priority_queue<char,vector<char>,greater<char>>maxheap;

        for(auto it:freq){
            maxheap.push({it.second,it.first});
        }

        string ans;
        
        while(!maxheap.empty()){
            int cnt=maxheap.top().first;
            char ch=maxheap.top().second;
            maxheap.pop();

            ans+=string(cnt,ch);
        }

        return ans;
    }
};