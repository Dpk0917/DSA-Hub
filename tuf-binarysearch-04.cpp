class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int floor = -1;
        int ceil = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= x) {
                if (floor == -1 || nums[i] > floor) {
                    floor = nums[i];
                }
            }
            if (nums[i] >= x) {
                if (ceil == -1 || nums[i] < ceil) {
                    ceil = nums[i];
                }
            }
        }

        return {floor, ceil};
    }
};
