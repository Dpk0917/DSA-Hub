#include<iostream>

using namespace std;


// void update2(int &n){
//     n++;
// }

// void update1(int n){
//     n++;
    
// }


int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
         
    }
    return sum;
}
int main(){
    
    /*
    int i=5;
    
    //create a refrence variable 
    int &j=i;
    
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    */
    
    // int n=5;
    // cout<<"before: "<<n<<endl;
    // update2(n);
    // cout<<"after: "<<n<<endl;
    
    
    // char ch='a';
    // cout<<sizeof(ch)<<endl;
    
    // char *c=&ch;
    // cout<<sizeof(c)<<endl;
    
    // new int[5];
    // int*arr=new int[5];
    // cout<<arr<<endl;
    
    
    int n;
    cin>>n;
    
    //variable size array
    int *arr=new int[n];
    
    //taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
   
    }
    
    int ans=getSum(arr,n);
    cout<<"the answer is: "<<ans<<endl;
    
    
    return 0;
}