#include <bits/stdc++.h>

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>star;
        int ans=0;

        for(int i=0;i<s.length();i++){
            char ch=s[i];

            if(ch=='('){
                star.push(ch);
            }else{
                star.pop();

                if (s[i-1]=='(') {
                    ans+=pow(2,star.size());
                }
            }

        }

        return ans;
    }
};