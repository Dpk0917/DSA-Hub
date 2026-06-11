class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
    int n=s.length();

    string result(n,'0');

    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            if(result[n-1]=='1'){
                result[j]='1';
                j++;
            }else{
                result[n-1]='1';
            }
        }
    }

    return result;
    }
};