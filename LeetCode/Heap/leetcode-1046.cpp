class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxhp;

        for(int i=0;i<stones.size();i++){
            maxhp.push(stones[i]);
        }

        while(maxhp.size()>1){
            int y=maxhp.top();
            maxhp.pop();
            int x=maxhp.top();
            maxhp.pop();

            if(x==y){
                continue;
            }

            if(x!=y){
                maxhp.push(y-x);
            }     

        }


        if(maxhp.empty()){
            return 0;
        }
        return maxhp.top();
    }
};