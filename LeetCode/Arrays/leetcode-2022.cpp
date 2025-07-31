class Solution {
    public:
        vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
            if(original.size()!=m*n){
                return {};
            }
            vector<vector<int>> ans(m, vector<int>(n));
            for(int row=0;row<m;row++){
                for(int col=0;col<n;col++){
                    ans[row][col]=original[row*n+col];
    
                }
            }
         return ans;   
        }
    
    };