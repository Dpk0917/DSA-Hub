// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n=arr.size();
        if(n==1 || arr[0]<arr[n-1]){
            return 0;
        }

        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                return i;
            }
        }

        return 0;
    }
};
