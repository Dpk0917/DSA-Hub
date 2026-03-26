class Solution {
private:
    // void happy(int n,bool temp){

    //     while(n)
    // }
public:
    bool isHappy(int n) {
        // if(n>10){
        //     return false;
        // }

        // bool temp=false;

        // bool ans=happy(n,temp);

        unordered_map<int,bool>mp;

        while(n!=1){
            if(mp[n]==true){
                return false;
            }
            mp[n] = true;

            int sum = 0;
            while(n > 0){
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
            }
            n = sum;
        }
        return true;

    }
};