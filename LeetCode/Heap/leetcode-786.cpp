class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {

        priority_queue<tuple<double,int,int>>pq;

        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                double val=(double)arr[i]/arr[j];

                if(pq.size()<k){
                    pq.push({val,i,j});
                }else if(get<0>(pq.top())>val){
                    pq.pop();
                    pq.push({val,i,j});
                }
            }
        }

        auto it=pq.top();
        return {arr[get<1>(it)],arr[get<2>(it)]};
    }
};