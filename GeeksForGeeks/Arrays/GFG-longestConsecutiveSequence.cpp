class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(),arr.end());

        int largest=0;
        int lastlargest=INT_MIN;
        int countcurr=0;
        int n=arr.size();

        for(int i=0;i<n;i++){
            if(arr[i]-1==lastlargest){
                countcurr++;
                lastlargest=arr[i];

            }else if(arr[i]!=lastlargest){
                countcurr=1;
                lastlargest=arr[i];
            }
            largest=max(largest,countcurr);

        }
        return largest;
    }
};