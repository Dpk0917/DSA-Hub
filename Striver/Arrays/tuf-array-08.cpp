class Solution {
    public:
        void rotateArray(vector<int>& nums, int k) {
            int n = nums.size();
            k = k % n;  // handle k > n
            vector<int> temp(n);
    
            for (int i = 0; i < n; i++) {
                temp[i] = nums[(i + k) % n];
            }
    
            nums = temp;
        }
    };