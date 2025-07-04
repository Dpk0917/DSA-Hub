/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int totalGas = 0, totalCost = 0, tank = 0;
    int startIndex = 0;

    for (int i = 0; i < gas.size(); i++) {
        totalGas += gas[i];
        totalCost += cost[i];
        tank += gas[i] - cost[i];

        if (tank < 0) {
            // Can't reach station i+1, reset start
            startIndex = i + 1;
            tank = 0;
        }
    }

    if (totalGas >= totalCost) {   // can complete the circuit
    return startIndex;         // starting station found
} else {                       // not enough fuel overall
    return -1;                 // no possible starting station
}

    }
};