class Solution {
private:
    bool isCycleDetected(unordered_map<int,vector<int>>&adjacent,int u,vector<bool>&visited,vector<bool>&inRecursion){
        visited[u]=true;
        inRecursion[u]=true;
        for(int &v:adjacent[u]){
            if(!visited[v]){
                if(isCycleDetected(adjacent,v,visited,inRecursion)){
                    return true;
                }
            }
            else if(inRecursion[v]){
                return true;
            }
        }
        inRecursion[u]=false;
        return false;
    }

public:
    bool isCyclic(int V,vector<vector<int>>&edges){
        unordered_map<int,vector<int>>adjacent;
        for(auto &edge:edges){
            adjacent[edge[0]].push_back(edge[1]);
        }
        vector<bool>visited(V,false);
        vector<bool>inRecursion(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]&&isCycleDetected(adjacent,i,visited,inRecursion)){
                return true;
            }
        }
        return false;
    }
};