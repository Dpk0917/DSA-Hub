class Solution {
public:
//         int getPivot(vector<int>& nums, int size){
//         int start = 0, end = size - 1;
//         while(start < end){
//             int mid = start + (end - start) / 2;
//             if(nums[mid] >= nums[0]){
//                 start = mid + 1;
//             }else{
//                 end = mid;
//             }
//         }
//         return start;
//     }

//     int BinarySearch(vector<int>& nums, int start, int end, int target){
//         while(start <= end){
//             int mid = start + (end - start) / 2;
//             if(nums[mid] == target){
//                 return mid;
//             }else if(nums[mid] > target){
//                 end = mid - 1;
//             }else{
//                 start = mid + 1;
//             }
//         }
//         return -1;
//     }


    int search(vector<int>& nums, int target) {

        int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
            }
        }
        return ans;

        // int size = nums.size();
        // int Pivot = getPivot(nums, size);
        // if(target >= nums[Pivot] && target <= nums[size - 1]){
        //     return BinarySearch(nums, Pivot, size - 1, target);
        // }else{
        //     return BinarySearch(nums, 0, Pivot - 1, target);
        // }
        // return 0;
    }
};
