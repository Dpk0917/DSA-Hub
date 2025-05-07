class Solution {
    public:
        vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
    
                                    //optimal Solution
    
            //question phele se sorted array de rakha hai tabhi sort nahi kiya 
            int n1=nums1.size();
            int n2=nums2.size();   
    
            int i=0;
            int j=0;
            vector<int>unionArr;
    
            while(i<n1 && j<n2){
                //agar nums1[i] ka element chota hai toh ye krenge 
                if(nums1[i]<=nums2[j]){
                    //yaha hum check krenge ki union ka last element same toh nahi hai agr size zero bhi toh chalega 
                    if(unionArr.size()==0 || unionArr.back()!=nums1[i]){
                        unionArr.push_back(nums1[i]);
                    }
                    i++; //lenge ya agar nahi bhi liya toh mtlb woh uske equal hoga toh ek aage bada diya
                }else{
                    //iska mtlb nums2[j] ka element chota hai
                    if(unionArr.size()==0 || unionArr.back()!=nums2[j]){
                        unionArr.push_back(nums2[j]);
    
                    }
                    j++;
                }
            }
    
            //agar 1st array khtm ho gaya tabh j ke baki element dalenge usme toh uske liye hum ye krenge 
            while(j<n2){
                if(unionArr.size()==0 || unionArr.back()!=nums2[j]){
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }
    
            //agar 2st array khtm ho gaya tabh j ke baki element dalenge usme toh uske liye hum ye krenge 
            while(i<n1){
                if(unionArr.size()==0 || unionArr.back()!=nums1[i]){
                    unionArr.push_back(nums1[i]);
                }
                i++;
            }
    
            return unionArr;
        }
    };
    