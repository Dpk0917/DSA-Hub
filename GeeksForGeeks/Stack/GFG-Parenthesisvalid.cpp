class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> strac;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(' || ch == '{' || ch == '[') {
                strac.push(ch);
            } else {
                if (strac.empty()) return false;

                char tap = strac.top();

                if ((tap == '(' && ch == ')') ||
                    (tap == '{' && ch == '}') ||
                    (tap == '[' && ch == ']')) {
                    strac.pop();
                } else {
                    return false;
                }
            }
        }

        return strac.empty();
    }
};