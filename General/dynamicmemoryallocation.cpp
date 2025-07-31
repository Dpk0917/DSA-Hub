#include<iostream> 

using namespace std;

int main(){
    
    //for same no. of rows and cols
    // int n;
    // cin>>n;
    
    
    //for different row and cols
    
    int row;
    cin>>row;
    
    int col;
    cin>>col;
    
    
    //creation of a 2D array
    int **arr=new int*[row];
    
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
        
    }
    //creation doen
    
    
    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cin>>arr[i][j];
            
        }
    }

    //taking output
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    } 
    
    //for delete krne ke liye
    for(int i=0;i<row;i++){
        delete [] arr[i]; 
        
    }
    
    delete []arr;
    
    return 0;
}
