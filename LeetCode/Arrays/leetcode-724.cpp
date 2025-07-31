class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int total = 0;
            int size = nums.size();
            for (int i = 0; i < size; i++) {
                total += nums[i];
            }
            int leftsum = 0;
            for (int i = 0; i < size; i++) {
                int rightsum = total - leftsum - nums[i];
                if (leftsum == rightsum) {
                    return i;
                }
                leftsum += nums[i];
            }
            return -1;
        }
    };
    