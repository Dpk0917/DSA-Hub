class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        //transposing
        for(int i=0;i<row-1;i++){
            for(int j=i+1;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reversing the rows 
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(),matrix[i].end());
            
        }
                            //brute force 
        // vector<vector<int>> ans(col, vector<int>(row));

        // for(int i = 0; i < row; i++) {
        //     for(int j = 0; j < col; j++) {
        //         ans[j][row - 1 - i] = matrix[i][j];
        //     }
        // }

        // matrix = ans;
    }
};
