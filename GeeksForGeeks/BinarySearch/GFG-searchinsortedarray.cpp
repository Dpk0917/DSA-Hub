class Solution {
    public:
      int findTarget(vector<int>& arr, int target) {
          // code here
          for(int i=0;i<arr.size();i++){
              if(arr[i]==target) return i;
          }
          return -1;
          
          // int i=find(arr.begin(),arr.end(),target);
          
          // if(i!=-1){
          //     return i;
          // }else{
          //     return -1;
          // }
      }
  };