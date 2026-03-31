class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int,int>map;
        
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }

        unordered_map<int,int> countMap;

        for(auto it : map){
             int freq = it.second;

             countMap[freq]++;

             if(countMap[freq] > 1){
                return false;  // duplicate frequency
            }
}

return true;

        
        
    }
};