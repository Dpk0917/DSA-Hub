class Solution {
private:
    int factorial(int n){
        if(n==0 || n==1){
            return 1;

        }

        return n*factorial(n-1);
    }
public:
    int numTrees(int n){
        
        long long res=1;

        for(int i=0;i<n;i++){
            res=res*(2*n-i)/(i+1);
        }

        return res/(n+1);
    }
};