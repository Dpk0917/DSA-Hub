class Solution {
    public:
        bool arraySortedOrNot(int arr[], int n) {
    
            for(int i=0;i<n;i++){
                if(arr[i]<=arr[i+1]){
                    return true;
                }else{
    
                    return false;
                }
                   
            }
        }
    };
    