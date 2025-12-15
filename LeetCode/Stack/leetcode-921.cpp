class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char>st;
        // int ans=0;

        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='(' || st.empty() ||st.top()==')'){
        //         st.push(s[i]);

        //     }else{
        //         if(s[i]==')' && st.top()=='('){
        //             st.pop();
        //         }
        //     }

        // }

        // return st.size();

                                    //APPROACH 02

        stack<char>st;
        int ans=0;

        for(int i=0;i<s.length();i++){

            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }else{
                    st.push(s[i]);
                }

            }
        }

        return st.size();
    }
};