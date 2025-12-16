class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>tt;

        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(s[i]);
            }
        }

        for(int i=0;i<t.length();i++){
            if(t[i]=='#'){
                if(!tt.empty()){
                    tt.pop();
                }
            }else{
                tt.push(t[i]);
            }
        }

        if(st.empty() && tt.empty()){
            return true;
        }

        if(st.size()!=tt.size()){
            return false;
        }

        while(!st.empty()){
            if(st.top()!=tt.top()){
                return false;
            }
            st.pop();
            tt.pop();
        }
        return true;
        
    }
};