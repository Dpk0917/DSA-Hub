class Solution {
public:
    string clearStars(string s) {

        struct cmp {
            bool operator()(pair<char,int>& a, pair<char,int>& b){
                if(a.first == b.first){
                    return a.second < b.second; // rightmost first
                }
                return a.first > b.first; // smallest char first
            }
        };

        
       priority_queue<pair<char,int>,vector<pair<char,int>>,cmp> pq;

       for(int i=0;i<s.length();i++){
            if(s[i]!='*'){
                pq.push({s[i],i});
            }else{
                auto it=pq.top();
                s[it.second]='*';
                pq.pop();
            }

       }

       string ans="";
       for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                continue;
            }else{
                ans+=s[i];
            }
       }

       return ans;
    }
};