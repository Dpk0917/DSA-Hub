class Solution {
private:
    double solveeven(vector<int>&arr,int &n){
        return (arr[n/2]+arr[(n/2)-1])/2.0;
    }
    
    double solveodd(vector<int> &arr,int &n){
        return arr[n/2];
    }
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        
        if(n%2==0){
            return solveeven(arr,n);
            
        }else{
            return solveodd(arr,n);
        }
    }
};