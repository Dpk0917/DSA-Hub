class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int n=arr.size();
        int largest=INT_MIN;
        int ans=-1;

        for(int i=0;i<n;i++){
            if(largest<=arr[i]){
                largest=arr[i];
            }
        }

        for(int i=0;i<n;i++){
            if(ans<arr[i] && arr[i]<largest){
                ans=arr[i];
            }
        }

        if(ans==INT_MIN){
            return ans;
        }

        return ans;
    }
};
