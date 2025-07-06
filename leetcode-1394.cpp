class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=1;
       
        int ans=-1;

        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]==arr[i+1]){
                count++;
            }else{
                if(count==arr[i+1]){
                    ans=arr[i+1];
                    break;
                }
                count=1;
            }
        }
        
        if(count==arr[0]){
            ans=arr[0];
        }
        
        return ans;

        // unordered_map<int,int>count;
        // int ans=-1;

        // for(int i=0;i<arr.size();i++){
        //     int num=arr[i];
        //     count[num]++;
        // }



    }
};