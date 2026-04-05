class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<int,int>map;

        for(int i=0;i<moves.size();i++){
            map[moves[i]]++;

        }

        if((map['U']==map['D']) && (map['L']==map['R'])){
            return true;
        }

        return false;
    }
};