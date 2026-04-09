class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        
        // vector<bool>used(arr.size(),false);

        // for(int i=0;i<arr.size()-1;i++){
        //     if(used[i]==true){
        //         continue;
        //     }
        //     bool foundpair=false;

        //     for(int j=i+1;j<arr.size();j++){
        //         if(used[j]==true){
        //             continue;
        //         }

        //         if((arr[i]+arr[j])%k==0){
        //             used[i]=true;
        //             used[j]=true;
        //             foundpair=true;
        //             break;
        //         }

        //     }

        //     if(foundpair==false){
        //         return false;
        //     }
        // }


        // return true;


        int n=arr.size();

        if(n%2==1){
            return false;
        }

        unordered_multiset<int>st;

        for(int i=0;i<n;i++){
            int r1=((arr[i]%k)+k)%k; // FIX
            int r2=(k-r1)%k;         // also safe
            
            auto it=st.find(r2);

            if(it!=st.end()){
                st.erase(it);
            }else{
                st.insert(r1);
            }
        }


        return st.empty();
    }
};