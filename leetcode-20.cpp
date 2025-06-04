class Solution {
public:
    bool isValid(string s) {
        stack<char> strac;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // Pushing opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                strac.push(ch);
            }
            // Handling closing brackets
            else {
                if (!strac.empty()) {
                    char top = strac.top();
                    //ch is our current and top is from the stack jaha push karaya hai
                    if ((ch == ')' && top == '(') ||
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) {
                        strac.pop();
                    } else {
                        return false; // Mismatch case
                    }
                } else {
                    return false; // Stack is empty when closing bracket appears
                }
            }
        }

        // Check if all brackets are closed
        if (strac.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
