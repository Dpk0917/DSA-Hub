class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        vector<int> row(n, 0);
        vector<int> col(m, 0);


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }
};

                                     // brute force solution 
// class Solution {
// private:
//     void markrow(vector<vector<int>>& matrix, int i, int colsize) {
//         for(int j=0;j<colsize;j++) {
//             if(matrix[i][j]!=0) {
//                 matrix[i][j]=-1;
//             }
//         }
//     }

//     void markcol(vector<vector<int>>& matrix, int j, int rowsize) {
//         for(int i=0;i<rowsize;i++) {
//             if(matrix[i][j]!=0) {
//                 matrix[i][j]=-1;
//             }
//         }
//     }

// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         for(int i=0;i<row;i++) {
//             for(int j=0;j<col;j++) {
//                 if(matrix[i][j]==0) {
//                     markrow(matrix,i,col);
//                     markcol(matrix,j,row);
//                 }
//             }
//         }
//         for(int i=0;i<row;i++) {
//             for(int j=0;j<col;j++) {
//                 if(matrix[i][j]==-1) {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }
// };
