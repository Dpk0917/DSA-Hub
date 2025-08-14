class Solution {
public:
    string largestGoodInteger(string num) {
        string maxstreak = "";
        for (int i = 0; i <= num.length() - 3; i++) { // fixed loop bound
            if (num[i] == num[i+1] && num[i] == num[i+2]) {
                maxstreak = max(maxstreak, string(3, num[i])); // build 3-char string
            }
        }
        return maxstreak;
    }
};
