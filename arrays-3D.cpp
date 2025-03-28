#include<iostream>
using namespace std;

int main(){
    
    int row;
    cout<<"Enter the no. of row: "<<endl;
    cin>>row;
    
    
    int **arr=new int*[row];
    int *col=new int[row];
    for(int i=0;i<row;i++){
        cout<<"Enter the no. of col: "<<endl;
        cin>>col[i];
        
        cout<<"Enter element for row "<<i+1<<":"<<endl; 
        arr[i]=new int[col[i]];
        for(int j=0;j<col[i];j++){
            cin>>arr[i][j];
        }
    }
    
    
    cout<<endl;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col[i];j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    for(int i=0;i<row;i++){
        delete [] arr[i];
        
    }
    
    delete [] arr;
    
    return 0;
}