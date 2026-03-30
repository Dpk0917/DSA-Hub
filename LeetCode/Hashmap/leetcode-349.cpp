class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //     vector<int> ans;
    //     for(int i=0;i<nums1.size();i++){
    //         for(int j=0;j<nums2.size();j++){
    //             if(nums1[i]==nums2[j]){
    //                 if(find(ans.begin(), ans.end(), nums1[i]) == ans.end()) {
    //                     ans.push_back(nums1[i]);
    //                 }
                         
    //             }
                
    //         }

    //     }
    //      return ans;

    unordered_set<int>map;

    for(int i=0;i<nums1.size();i++){
        map.insert(nums1[i]);
    }
    vector<int>ans;

    for(int i=0;i<nums2.size();i++){
        if(map.find(nums2[i])!=map.end()){
            ans.push_back(nums2[i]);
            map.erase(nums2[i]);
        }
    }

    return ans;
    }
   
};