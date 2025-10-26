class Solution {
  public:
    int maxPerimeter(vector<int> &arr) {
        // code here.
        
        sort(arr.begin(),arr.end(),greater<int>());
        
       
        for(int i=0;i<arr.size()-2;i++){
            int a=arr[i];
            int b=arr[i+1];
            int c=arr[i+2];
            
            if(b+c>a){
                return a+b+c;
                
            }
            
        }
        
        return -1;
    }
};