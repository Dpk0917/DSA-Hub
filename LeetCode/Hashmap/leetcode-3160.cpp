class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n=queries.size();

        vector<int>result(n);
        unordered_map<int, int> colorCount;   // color -> frequency
        unordered_map<int, int> ballColor;    // ball -> current color);

        for(int i=0;i<n;i++){
            int ball=queries[i][0];
            int color=queries[i][1];

            if(ballColor.count(ball)){
                int prevcolor=ballColor[ball];
                colorCount[prevcolor]--;

                if(colorCount[prevcolor]==0){
                    colorCount.erase(prevcolor);
                }
            }

            ballColor[ball]=color;
            colorCount[color]++;

             result[i]=colorCount.size();
        }

        return result;
    }
};