class Solution {
public:
    int findFloor(vector<int>& arr, int x) {
        int floorIndex = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                if (floorIndex == -1 || arr[i] >= arr[floorIndex]) {
                    floorIndex = i;
                }
            }
        }

        return floorIndex;
    }
};
