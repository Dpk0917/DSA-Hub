class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>maxheap;
        int ans=0;
        for(int i=0;i<piles.size();i++){
            maxheap.push(piles[i]);
            ans=ans+piles[i];

        }

        while(k!=0){
            int top=maxheap.top();
            maxheap.pop();
            int fval=floor(top/2);
            ans=ans-fval;
            int remaining=top-fval;
            maxheap.push(remaining);

            k--;
        }

        return ans;


    }
};