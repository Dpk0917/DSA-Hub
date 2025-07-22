class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int first=-1;
        int last=-1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                if(first==-1){
                    first=i;
                    last=i;
                }
                last=i;
            }
        }
        
        return {first,last};
    }
};