class Solution {
public:
    static const int M=1e9+7;

    int lengthAfterTransformations(string s,int t) {
        vector<long long> cnt(26,0);

        for(char ch:s) {
            cnt[ch-'a']++;
        }

        for(int step=0;step<t;step++) {
            vector<long long> temp(26,0);

            for(int i=0;i<25;i++) {
                temp[i+1]=(temp[i+1]+cnt[i])%M;
            }

            temp[0]=(temp[0]+cnt[25])%M;
            temp[1]=(temp[1]+cnt[25])%M;

            cnt=move(temp);
        }

        long long ans=0;

        for(int i=0;i<26;i++) {
            ans=(ans+cnt[i])%M;
        }

        return ans;
    }
};