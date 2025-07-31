#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        } else if (ch == ')') {
            bool redundantBracket = true;

            // Check content between brackets
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    redundantBracket = false;
                }
                st.pop();
            }

            // Pop the opening '('
            if (!st.empty()) {
                st.pop();
            }

            // If no operator found, it's redundant
            if (redundantBracket == true) {
                return true;
            }
        }
    }

    return false;
}
