class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0){
                return 0;
            }
            long long temp=x;
            long long reversed=0;
    
            while(temp!=0){
                int digit=temp%10;
                reversed=reversed*10+digit;
                temp=temp/10;
                
            }
            if(reversed==x){
                return 1;
            }
            return 0;
    
            }
    };