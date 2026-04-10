class Solution {
public:
    int minimumPushes(string word) {
        int result=0;

        unordered_map<int,int>map;

        int assign_key=2;
        int ans=0;
        for(int i=0;i<word.length();i++){
            if(assign_key>9){
                assign_key=2;
            }

            map[assign_key]++;
            ans+=map[assign_key];
            assign_key++;

        }

        return ans;
    }
};