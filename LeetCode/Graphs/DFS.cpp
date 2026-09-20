class Solution {
    void DFS(unordered_map<int,vector<int>>&adjacent,int u,vector<bool>&visited,vector<int>&ans){
        
        if(visited[u]==true){
            return;
        }
        
        visited[u]=true;
        ans.push_back(u);
        
        for(int &v:adjacent[u]){
            if(!visited[v]){
                
                DFS(adjacent,v,visited,ans);
            }
        }

    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        unordered_map<int,vector<int>>adjacent;

        for(int i=0;i<adj.size();i++){
        
            for (auto &v : adj[i]) {
                adjacent[i].push_back(v);
            }
        }
        
        vector<bool>visited(adj.size(),false);
        
        vector<int>ans;
        
        DFS(adjacent,0,visited,ans);
        
        return ans;
    }
};