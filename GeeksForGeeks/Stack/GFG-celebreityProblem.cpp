class Solution {
private:
    bool knows(vector<vector<int>>& mat, int a, int b) {
        return mat[a][b] == 1;
    }

public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> s;

        // Step 1: Push all persons to the stack
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Step 2: Eliminate non-celebrities
        while (s.size() > 1) {
            int A = s.top(); s.pop();
            int B = s.top(); s.pop();

            if (knows(mat, A, B)) {
                s.push(B); // A can't be celebrity
            } else {
                s.push(A); // B can't be celebrity
            }
        }

        // Step 3: Verify the last person
        int ans = s.top();

        // Check if ans knows no one (except self)
        bool rowCheck = false;
        int zeroCount = 0;
        for (int i = 0; i < n; i++) {
            if (i != ans && mat[ans][i] == 0) {
                zeroCount++;
            }
        }
        if (zeroCount == n - 1) {
            rowCheck = true;
        }

        // Check if everyone knows ans (except self)
        bool colCheck = false;
        int oneCount = 0;
        for (int i = 0; i < n; i++) {
            if (i != ans && mat[i][ans] == 1) {
                oneCount++;
            }
        }
        if (oneCount == n - 1) {
            colCheck = true;
        }

        if (rowCheck && colCheck) {
            return ans;
        } else {
            return -1;
        }
    }
};
