class Solution {
public:
    int minimumPushes(string word) {
        
        unordered_map<char,int> mp;

        // count frequency
        for(char ch : word){
            mp[ch]++;
        }

        // store frequencies
        vector<int> freq;
        for(auto &it : mp){
            freq.push_back(it.second);
        }

        // sort descending
        sort(freq.begin(), freq.end(), greater<int>());

        int pushes = 0;

        // assign pushes
        for(int i = 0; i < freq.size(); i++){
            int cost = (i / 8) + 1;
            pushes += freq[i] * cost;
        }

        return pushes;
    }
};