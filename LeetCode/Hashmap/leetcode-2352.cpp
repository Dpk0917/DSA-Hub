class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        map<vector<int>,int>map;
        int count=0;

        for(int row=0;row<grid.size();row++){
            map[grid[row]]++;

        }

        for(int col=0;col<n;col++){
            vector<int>temp;
            for(int row=0;row<n;row++){
                temp.push_back(grid[row][col]);
            }

            count+=map[temp];
        }

        return count;
    }

};