// class Solution {
// public:
//     char processStr(string s, long long k) {
//         string ans="";
//         for(int i=0;i<s.length();i++){
//             if(s[i]>='a' && s[i]<='z'){
//                 ans+=s[i];
//             }

//             if(s[i]=='*'){
//                 if(!ans.empty()){
//                     ans.pop_back();
//                 }
//             }

//             if(s[i]=='#'){
//                 ans+=ans;
//             }

//             if(s[i]=='%'){
//                 reverse(ans.begin(),ans.end());
//             }
//         }


//         if(k>=ans.size()){
//             return '.';
//         }else{
//             return ans[k];
//         }
//     }
// };

class Solution {
public:
    vector<long long> len;
    string s;

    char solve(int i, long long k) {
        if (i < 0) return '.';

        char op = s[i];

        if ('a' <= op && op <= 'z') {
            if (k == len[i]) return op;
            return solve(i - 1, k);
        }

        if (op == '#') {
            long long oldLen = len[i];
            return solve(i - 1, k % oldLen);
        }

        if (op == '%') {
            long long oldLen = len[i];
            return solve(i - 1, oldLen - 1 - k);
        }

        if (op == '*') {
            long long oldLen = len[i];

            // Character at position oldLen-1 was deleted.
            // Any valid position in the new string maps directly.
            if (k >= oldLen - 1) return '.';

            return solve(i - 1, k);
        }

        return '.';
    }

    char processStr(string str, long long k) {
        s = str;
        int n = s.size();

        len.assign(n + 1, 0);

        const long long INF = 1e18;

        for (int i = 0; i < n; i++) {
            len[i + 1] = len[i];

            if ('a' <= s[i] && s[i] <= 'z') {
                len[i + 1]++;
            }
            else if (s[i] == '*') {
                if (len[i] > 0) len[i + 1] = len[i] - 1;
            }
            else if (s[i] == '#') {
                len[i + 1] = min(INF, len[i] * 2);
            }
            else if (s[i] == '%') {
                len[i + 1] = len[i];
            }
        }

        if (k >= len[n]) return '.';

        return solve(n - 1, k);
    }
};