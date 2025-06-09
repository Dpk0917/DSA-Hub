// User function Template for C++

#include <unordered_map>

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        int n = arr.size();
        int count = 0;
        int sum = 0;
        
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1; // To count subarrays that start from index 0

        for (int i = 0; i < n; i++) {
            sum += arr[i];  // calculate prefix sum till index i

            // check if there's a previous prefix sum that makes current sum - k
            if (prefixSumCount.find(sum - k) != prefixSumCount.end()) {
                count += prefixSumCount[sum - k];
            }

            // store the current prefix sum in the map
            prefixSumCount[sum]++;
        }

        return count;
    }
};
