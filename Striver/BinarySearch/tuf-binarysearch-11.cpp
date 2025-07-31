class Solution {
public:
    long long floorSqrt(long long n)  {
                  
                  //binary search
      long long ans=1;
      int low=1;
      int high=n;

      while(low<=high){
        mid=low+(high-low)/2;

        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }

        return ans;
      }


              //linear search

    //   long long ans=1;

    //   for(long long i=1;i<=n;i++){
    //     if(i*i<=n){
    //         ans=i;
    //     }else{
    //         break;
    //     }
    //   }
    //   return ans;
    }
};