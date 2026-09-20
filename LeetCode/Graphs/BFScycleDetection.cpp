class Solution {
  private:
    bool iscycleBFS(vector<vector<int>>& adj,int u,vector<bool>&visited){
        
        queue<pair<int,int>>q;
        q.push({u,-1});
        
        visited[u]=true;
        
        while(!q.empty()){
            
            auto top=q.front();
            q.pop();
            
            int source=top.first;
            int parent=top.second;
            
            for(auto &v:adj[source]){
                if(!visited[v]){
                    q.push({v,source});
                    visited[v]=true;
                }else if(v!=parent){
                    return true;
                }
            }
        }
        
        return false;
        
    }
    
    
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        vector<vector<int>> adj(V);

        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // Code here
        vector<bool>visited(V,false);
        
        for(int  i=0;i<V;i++){
            if(!visited[i] && iscycleBFS(adj,i,visited)){
                return true;
            }
        }
        
        return false;
    }
};