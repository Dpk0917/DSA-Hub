class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int M = 1e9+7;

        int n=s.length();

        vector<int>map(26,0);

        for(char &ch:s){
            map[ch-'a']++;
        }

        for(int i=1;i<=t;i++){
            vector<int>temp(26,0);

            for(int j=0;j<26;j++){
                char ch=j+'a';
                int freq=map[j];

                if(ch!='z'){
                    temp[(ch+1)-'a']=(temp[(ch+1)-'a']+freq)%M;

                }else{
                    temp['a'-'a']=(temp['a'-'a']+freq)%M;
                    temp['b'-'a']=(temp['b'-'a']+freq)%M;

                }
            }

            map=move(temp);
        }

        int ans=0;
        for(int i=0;i<26;i++){
            ans=(ans+map[i])%M;
        }


        return ans;
    }
};