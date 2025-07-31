#include <vector>
#include <cmath>
#include <cstdlib>

class Solution {
private:
    bool isPrimeIndex(int index) {
    if (index <= 1) return false;      // 0 and 1 are not prime
    if (index <= 3) return true;       // 2 and 3 are prime

    if (index % 2 == 0 || index % 3 == 0) 
        return false;

    for (int i = 5; i * i <= index; i += 6) {
        if (index % i == 0 || index % (i + 2) == 0)
            return false;
    }
    return true;
}
public:
    long long splitArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        
        for(int i=0;i<nums.size();i++){
            if(isPrimeIndex(i)){
                a.push_back(nums[i]);
            }else{
                b.push_back(nums[i]);
            }
        }
        long long sum1=0;
        long long sum2=0;
        
        for (size_t i = 0; i < a.size(); ++i) sum1 += a[i];
        for (size_t i = 0; i < b.size(); ++i) sum2 += b[i];

        return llabs(sum1-sum2);
    }
};©leetcode