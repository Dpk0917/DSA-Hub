class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        
        // Handle edge case: if array has only one element or is not rotated
        if (n == 1 || nums[0] < nums[n - 1]) {
            return nums[0];
        }

        for (int i = 1; i < n; i++) {
            // The point of rotation is where the element is smaller than its previous
            if (nums[i] < nums[i - 1]) {
                return nums[i];
            }
        }

        // If no such point found, the first element is the minimum (not rotated)
        return nums[0];
    }
};
