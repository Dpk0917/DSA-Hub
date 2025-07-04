class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0;
        int totalcost=0;
        int startIndex=0;
        int tank=0;

        for(int i=0;i<gas.size();i++){
            totalgas+=gas[i];
            totalcost+=cost[i];

            tank+=gas[i]-cost[i];

            if(tank<0){
                tank=0;
                startIndex=i+1;
            }
        }

        if (totalgas >= totalcost) {   // can complete the circuit
            return startIndex;         // starting station found
        } else {                       // not enough fuel overall
            return -1;                 // no possible starting station
        }

    }
};