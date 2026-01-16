class Solution {
private:
    int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

public:
    bool canMeasureWater(int x, int y, int target) {
        int temp=gcd(x,y);

        if(target%temp==0){
            if(target<=x+y){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
         
    }
};