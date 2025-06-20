class Solution {
// private:
// long long int Searching(int start,int end,int n,int ans){
//         if(start>end){
//             return ans;
//         }
        
//         int mid=start+(end-start)/2;
//         long long int square=(long long int)mid*mid;
//         if(square==n){
//             return mid;
//         }else if(square>n){
           
//            return Searching(start,mid-1,n,ans);
//         }else{
//             ans=mid;
//             return Searching(mid+1,end,n,ans);
//         }
       
// }
public:
    int mySqrt(int x) {
                 
                    //linear search
    long long ans=1;

    if(x==0){
        return 0;
    }

      for(long long i=1;i<=x;i++){
        if(i*i<=x){
            ans=i;
        }else{
            break;
        }
      }
      return ans;


                     //using binary serach
        // int start=1;
        // int end=x;
        // if(x==0){
        //     return 0;
        // }
        // long long int ans=1;

        // return Searching(start,end,x,ans);        
    }
        
};