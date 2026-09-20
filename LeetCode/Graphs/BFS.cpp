class Solution {
private:
    void BFS(unordered_map<int,vector<int>>&adjacent,int u,vector<bool>&visited,vector<int>&ans){
        queue<int>q;
        
        q.push(u);
        visited[u]=true;
        
        
        while(!q.empty()){
            int node = q.front();
            q.pop();

            ans.push_back(node);
            
            for(auto &v:adjacent[node]){
                if(!visited[v]){
                    q.push(v);
                    visited[v]=true;
                }  
            }
            
        }
        
    }
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        unordered_map<int,vector<int>>adjacent;

        for(int i=0;i<adj.size();i++){

            for (auto &v : adj[i]) {
                adjacent[i].push_back(v);
            }
        }
        
        vector<bool>visited(adj.size(),false);

        vector<int>ans;

        BFS(adjacent,0,visited,ans);
        
        return ans;

    }
};