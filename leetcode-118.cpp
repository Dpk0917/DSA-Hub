class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;  // final triangle

        for (int row = 1; row <= numRows; row++) {
            long long ansValue = 1;         // single value inside row
            vector<int> ansrow;             // one row vector
            ansrow.push_back(ansValue);     // first element is always 1

            for (int col = 1; col < row; col++) {
                ansValue = ansValue * (row - col);
                ansValue = ansValue / col;
                ansrow.push_back(ansValue);
            }

            ans.push_back(ansrow);          // add completed row to triangle
        }

        return ans;
    }
};
