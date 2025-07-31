class Solution {
private:
    int fuxn(vector<int>& weights,int mid){
        int day=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>mid){
                day=day+1;
                load=weights[i];
            }else{
                load+=weights[i];
            }
        }
        return day;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            maxi=max(maxi,weights[i]);
            sum+=weights[i];
        }
        int low=maxi;
        int high=sum;

        while(low<=high){
            int mid=low+(high-low)/2;

            int NoOfDays=fuxn(weights,mid);
            if(NoOfDays<=days){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};