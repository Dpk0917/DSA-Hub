class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;

        while(numBottles>=numExchange){
            int drunk=numBottles/numExchange;
            ans+=drunk;
            numBottles=drunk+(numBottles%numExchange);

        }
        return ans;
        

    }
};
