class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        
        int n=quality.size();

        double ans=DBL_MAX;

        for(int manager=0;manager<wage.size();manager++){

            double manager_ratio=(double)wage[manager]/quality[manager];

            vector<double>group;
            for(int worker=0;worker<wage.size();worker++){

                double workerwage=manager_ratio*quality[worker];

                if(workerwage>=wage[worker]){
                    group.push_back(workerwage);
                }


            }

            if(group.size()<k){
                continue;
            }

            sort(group.begin(),group.end());

            double total=0;
            for(int i=0;i<k;i++){
                total+=group[i];
            }

            ans=min(ans,total);
        }

        return ans;
    }
};