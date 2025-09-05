class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a=z-x;
        int b=z-y;

        int first=abs(a);
        int second=abs(b);

        if(first==second){
            return 0;
        }
        else if(first<second){
            return 1;
        }else{
            return 2;
        }

    }
};