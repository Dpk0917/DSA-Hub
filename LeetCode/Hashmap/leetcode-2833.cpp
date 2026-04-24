class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        unordered_map<char,int>map;

        for(int i=0;i<moves.size();i++){
            map[moves[i]]++;
        }

        int L=map['L'];
        int R=map['R'];
        int blank=map['_'];

        int ans=abs(L-R)+blank;

        return ans;


    }
};