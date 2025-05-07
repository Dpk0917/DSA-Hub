class Solution {
    public:
        vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
            int n1=nums1.size();
            int n2=nums2.size();
    
            set<int>unique;
            for(int i=0;i<n1;i++){
                unique.insert(nums1[i]);
            }
    
            for(int i=0;i<n2;i++){
                unique.insert(nums2[i]);
            }
    
            vector<int>temp;
            for(auto it : unique){
                temp.push_back(it);
            }
    
            return temp;
    
            
        }
    };