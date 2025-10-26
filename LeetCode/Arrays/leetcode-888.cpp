class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {

        vector<int>ans;
        int suma=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int sumb=accumulate(bobSizes.begin(),bobSizes.end(),0);

        int diff=(suma-sumb)/2;

        for(int i=0;i<aliceSizes.size();i++){
            for(int j=0;j<bobSizes.size();j++){
                if(aliceSizes[i]-bobSizes[j]==diff){
                    ans.push_back(aliceSizes[i]);
                    ans.push_back(bobSizes[j]);
                    return ans;

                }
            }
        }
        return ans;
    }
};