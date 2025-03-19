
bool ifpossible(int arr[],int n,int m,int mid){
    int student=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum + arr[i] <=mid){
            pagesum+=arr[i];
        }else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
                
            }else{
                pagesum=arr[i];
                
            }
        }
        
    }
    return true;
}
int Bookallocation(int arr[],int n,int m){
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(ifpossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            start=mid+1;
            
        }
        
    }
    return ans;
}