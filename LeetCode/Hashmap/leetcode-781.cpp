class Solution {
public:
    int numRabbits(vector<int>& answers) {
        
        unordered_map<int,int>map;

        for(int i=0;i<answers.size();i++){
            map[answers[i]]++;
        }

        int total=0;

        for(auto &it:map){
            int x=it.first;
            int count=it.second;

            int gsize=x+1;
            int groups=ceil((double)count/gsize);

            total+=groups*gsize;
        }

        return total;
    }
};