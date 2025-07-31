#include <iostream>
#include <unordered_map>
using namespace std;

// int main(){
    
//     int array[]={5,6,7,8,9,10,11};
//     int size=sizeof(array)/sizeof(array[0]);
    
//     int element=0;
//     for(int i=0; i<1 ; i++){
//         cin>>element;
//     }
//     int count=0;
    
//     for(int i=0;i<size;i++){
//         if(array[i]==element){
//             count++;
//         }
//     }
    
//     cout <<"The element "<<element<<" occurs "<<count<<" times in the array."<< endl;
    
//     return 0;
// }



int main(){
    
    int array[5];
    int size= sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size;i++){
        cout<<"enter the elements of array: "<< endl;
        cin>>array[i];
    }
    int element=0;
    for(int i=0; i<1 ; i++){
        cin>>element;
    }
    int count=0;
    for(int i=0;i<size;i++){
        if(array[i]==element){
            count++;
            
        }
    }
    
    cout<<"the value will be: "<<count<< endl;
    
    return 0;
}
   