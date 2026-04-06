class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>>adj;

        for(const auto&pair:adjacentPairs){
            adj[pair[0]].push_back(pair[1]);
            adj[pair[1]].push_back(pair[0]);
        }

        int start=0;
        for (const auto& [node, neighbors] : adj) {
            if (neighbors.size() == 1) {
                start = node;
                break;
            }
        }

        vector<int>result;
        int curr=start;
        int prev=INT_MIN;

        int n=adjacentPairs.size() + 1;



        while (result.size() < n) {
            result.push_back(curr);
            
            // Find the next node to visit
            for (int neighbor : adj[curr]) {
                if (neighbor != prev) {
                    // Update pointers to move forward
                    prev = curr;
                    curr = neighbor;
                    break;
                }
            }
        }
        
        return result;

    }
};