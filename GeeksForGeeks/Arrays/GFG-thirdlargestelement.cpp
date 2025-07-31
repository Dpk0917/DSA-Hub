class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        if(n<=2){
            return -1;
        }
        int first=-1;
        int second=-1;
        int third=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(first<arr[i]){
                third=second;
                second=first;
                first=arr[i];
            }else if (arr[i]>second) {
                third = second;
                second = arr[i];
            }else if (arr[i] > third) {
                third = arr[i];
            }
        }
        
        return third;
    }
};