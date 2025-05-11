class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            if(arr[i]%2!=0){
                int j=i+1;
                if(arr[j]%2!=0){
                    int k=j+1;
                    if(arr[k]%2!=0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};