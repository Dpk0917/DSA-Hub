class Solution {
private:
    bool possible(vector<int>& bloomDay,int mid,int m,int k){

        int count=0;
        int NoOfBouquets=0;

        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
            }else{
                NoOfBouquets +=(count/k);
                count=0;
            }
        }
        NoOfBouquets +=(count/k);
        if(NoOfBouquets>=m){
            return true;
        }else{
            return false;
        }
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long val=m*1LL*k*1LL;
        int n=bloomDay.size();

        if(val>n){
            return -1;
        }

        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<bloomDay.size();i++){
            maxi=max(maxi,bloomDay[i]);
            mini=min(mini,bloomDay[i]);
        }

        int low=mini,high=maxi;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }else{
                low=mid+1;
            }
            
        }
        return low;

    }
};