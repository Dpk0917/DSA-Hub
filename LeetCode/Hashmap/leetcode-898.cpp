class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        
        unordered_set<int>ans;
        unordered_set<int>curr;
        unordered_set<int>prev;

        for(int i=0;i<arr.size();i++){

            for(auto &x:prev){
                curr.insert(arr[i]|x);
                ans.insert(arr[i]|x);
            }

            curr.insert(arr[i]);
            ans.insert(arr[i]);

            prev=curr;
            curr.clear();
        }

        return ans.size();

    }
};