class Solution {
// public:
//     int binarysearch(vector<int>& nums, int start, int end, int target) {
//         if (start > end) {
//             return -1;
//         }
//         int mid = start + (end - start) / 2;
//         if (nums[mid] == target) {
//             return mid;
//         }
//         if (nums[mid] < target) {
//             return binarysearch(nums, mid + 1, end, target);
//         } else {
//             return binarysearch(nums, start, mid - 1, target);
//         }
//     }

public:  int search(vector<int>& nums, int target) {
    //return binarysearch(nums, 0, nums.size() - 1, target);

    int n=nums.size();
    int left=0;
    int right=n-1;

    while(left<=right){
        int mid=left+(right-left)/2;

        if(nums[mid]==target){
            return mid;
        }

        else if(nums[mid]<target){
            left=mid+1;
        }else{
            right=mid-1;
        }

    }
    return -1;
        
    }
};
