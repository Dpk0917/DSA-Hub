class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> ans(col, vector<int>(row));

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                ans[j][row - 1 - i] = matrix[i][j];
            }
        }

        matrix = ans;
    }
};
