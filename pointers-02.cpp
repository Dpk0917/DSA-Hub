#include <iostream>
using namespace std;




/*
int main() {
    
    
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    cout<<"The address of first memory block: "<<arr<<endl;
    cout<<"The address of first memory block: "<<&arr[0]<<endl;
    
    cout<<"The first element: "<<*arr<<endl;
    cout<<"The first element + 1: "<<*arr+1<<endl;
    cout<<"The first element + 1: "<<(*arr)+1<<endl;
    cout<<"The second element: "<<arr[2]<<endl;
    cout<<"The second element: "<<*(arr+2)<<endl;
    
    int i=5;
    cout<<i[arr]<<endl;
    
    
    int array[10];
    cout<<"size of array: "<<sizeof(array)<<endl;
    cout<<"size of first element: "<<sizeof(*array)<<endl;
    
    int *ptr=&array[0];
    
    cout<<"size of the pointer: "<<sizeof(ptr)<<endl;
    cout<<"size of the pointer: "<<sizeof(*ptr)<<endl;
    cout<<"size of the pointer: "<<sizeof(&ptr)<<endl;
    
    int a[10]={1,2,3,4};
    cout<<"->"<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    
    int *p=&a[0];
    cout<<p<<endl;
    cout<<"->"<<&p<<endl;
    cout<<*p<<endl;
    
    
    int arr[10];
    
    //ERROR
    //arr=arr+1;
    
    int *p1=&arr[0];
    cout<<p1<<endl;
    p1=p1+1;
    cout<<p1<<endl;
    
    
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    
    cout<<arr<<endl;
    cout<<ch<<endl;
    
    char *p2=&ch[0];
    cout<<p2<<endl;
    
    char temp='z';
    char *p3=&temp;
    
    cout<<p3<<endl;
    */
    
    void print(int *p){
        cout<<p<<endl;
        
    }
    
    void update(int *p){
        //p=p+1;
        *p=*p+1;
        cout<<"after: "<<*p<<endl;
        
    }
    int getsum(int *arr,int n){
        cout<<"size of array: "<<sizeof(*arr)<<endl;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
        }
        return sum;
    }
    
    int main(){
        
        int value=5;
        int *p=&value;
    
        //print(p);
        
        cout<<"before:"<<p<<endl;
        update(p);
        int arr[5]={1,2,3,4,5};
        int n=5;
        cout<<"sum of the array: "<<getsum(arr,n)<<endl;
    
    return 0;
    
    
    
}
    
