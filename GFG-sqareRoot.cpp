// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        
        int ans=1;
        
        
        if(n==0){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(i*i<=n){
                ans=i;
            }
        }
        
        return ans;
    }
};