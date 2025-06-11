class Solution {
public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;  // to store next greater candidates

        for (int i = n - 1; i >= 0; i--) {
            // Remove all elements smaller or equal to current
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            // If stack is empty, no greater element to the right
            if (st.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = st.top();
            }

            // Push current element into stack
            st.push(arr[i]);
        }

        return ans;
    }
};


                        //   T.C-O(n^2)
// class Solution {
// public:
//     vector<int> nextLargerElement(vector<int>& arr) {
//         vector<int> ans;
//         int n= arr.size();
//         for (int i = 0; i < n; i++) {
//             int nextgreater = -1;
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[j] > arr[i]) {
//                     nextgreater = arr[j];
//                     break;
//                 }
//             }
//             ans.push_back(nextgreater);
//         }

//         return ans;
//     }
// };
