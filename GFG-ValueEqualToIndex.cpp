// User function template for C++

class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            if(i+1==arr[i]){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};