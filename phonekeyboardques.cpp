#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    void solve(const string& digits, vector<string>& ans, string output, int index, string mapping[]) {
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digits, ans, output, index + 1, mapping);
            output.pop_back(); // Backtracking
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty()) return ans; // Handle empty input

        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, ans, output, index, mapping);
        return ans;
    }
};

// Example usage
int main() {
    Solution sol;
    string digits = "23";
    vector<string> result = sol.letterCombinations(digits);

    // Print result
    for (const auto& combination : result) {
        cout << combination << " ";
    }
    cout << endl;

    return 0;
}
