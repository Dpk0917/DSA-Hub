class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>s;
        int n=nums1.size();
        int m=nums2.size();
        
        for(int i=0;i<n;i++){
            int nextgreater=-1;
            int curr1=nums1[i];
            for(int j=0;j<m;j++){
                if(curr1==nums2[j]){
                    for(int k=j+1;k<m;k++){
                        if(nums2[k]>curr1){
                            nextgreater=nums2[k];
                            break;
                        }
                    }
                    break;
                }
                
            }
            s.push_back(nextgreater);
        }

        return s;
    }
};