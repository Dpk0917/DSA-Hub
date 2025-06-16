int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	 int s=0;
        int ans=arr.size();
        int e=ans-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>x){
                e=mid-1;
                ans=mid;
            }else{
                s=mid+1;
            }
        }
        return ans;
}