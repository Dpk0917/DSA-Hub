int lowerBound(vector<int> arr, int n, int x) {
	
    int s=0;
    int ans=arr.size();
    int e=ans-1;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]>=x){
            ans=mid;
            e=mid-1;
		}else{
            s=mid+1;
            }
        }
        return ans;

}
