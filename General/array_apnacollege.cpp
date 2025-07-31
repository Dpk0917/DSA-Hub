#include <iostream>
#include <climits>
using namespace std;

//int main(){
    // int marks[5]={99,11,56,92,20};
    // marks[0]={91};
    // int size=5;
    
    // cout<<marks[0]<< endl;
    // cout<<marks[1]<< endl;
    // cout<<marks[2]<< endl;
    // cout<<marks[3]<< endl;
    // cout<<marks[4]<< endl;
    // cout<<marks[5]<< endl;
    
    // cout<< sizeof(marks)/sizeof(int) << endl;
    
    
    // double price[]={98.45,98.23,92.77};
    
    // return 0;
    

//}


    // void changeArr(int arr[],int size){
    //     cout<<"in function"<<endl;
    //     for(int i=0;i<size;i++){
    //         arr[i]=2*arr[i];
            
    //     }
           
    // }
 
    // int main(){
    //     int arr[]={1,2,3};
    //     int size=3;
    //     changeArr(arr,3);
        
    //     cout<<"in main"<<endl;
    //     for(int i=0;i<size;i++){
    //         cout<<arr[i]<<" " <<endl;
            
    //     }
    //     return 0;
    // }




    // int findingIndex(int array[],int size,int target){
    //     for(int i =0;i<size;i++){
    //         if(array[i]==target){
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
    
    // int main(){
        
    //     int array[]={4,2,7,8,1,2,5};
    //     int size=7;
    //     int target=2;
    //     cout<<findingIndex(array,size,target)<< endl;

    //     return 0;
    // }


    // void ReverseOnArray(int array[],int size){
    //     int start=0;
    //     int end=size-1;
    //     while(start<=end){
    //         swap(array[start],array[end]);
    //         start++;
    //         end--;
    //     }
    // }


    // int main(){
    //     int array[]={4,2,7,8,1,2,5};
    //     int size=7;

    //     ReverseOnArray(array,size);
    //     cout<<"the reverse array will be: "<<endl;
    //     for(int i=0;i<size; i++){
    //         cout<<array[i]<<" ";
            
    //     }
       
    //     return 0;
    //     }
        
    
    
    
    
    // int Sum(int array[],int size){
    //     int add=0;
    //     for(int i=0;i<size;i++){
    //         add+=array[i];
    //     }
    //     return add;
    // }
    
    // int Multiply(int array[],int size){
    //     int muls=1;
    //     for(int i=0;i<size;i++){
    //         muls=muls*array[i];
    //     }
    //     return muls;
    // }
 
    // int main(){
    //     int array[]={5,6,1,8,2,3,5,4};
    //     int size=8;
        
    //     int add=Sum(array,size);
    //     cout<<"the sum of the elements: "<<add<<  endl;
    //     int muls=Multiply(array,size);
    //     cout<<"the multiplicatiion of the elements: "<<muls<<endl;
    //     return 0;
    // }
    
    
    
    
//     void Swaping(int array[],int size){
//         int maxIndex=0;
//         int minIndex=0;
        
//         for(int i=0;i<size;i++){
//             if(array[i]>array[maxIndex]){
//                 maxIndex=i;
//             }
//         }
        
//         for(int i=0; i<size;i++){
//             if(array[i]<array[minIndex]){
//                 minIndex=i;
//             }
//         }
        
//         swap(array[maxIndex],array[minIndex]);

//     }
//     int main(){
//         int array[]={5,6,7,9,10,1};
//         int size=6;
        
//         Swaping(array,size);
        
//         for(int i=0;i<size;i++){
//             cout<<array[i]<< endl;
//         }
//     cout<<endl;
//     return 0;
// }
        
    
    
    //intersection 
   
   
    
    // void Intersection(int array[],int arr[],int size1,int size2){
    //     cout<<"the intersection elements are: ";
        
    //     for(int i=0;i<size1;i++){
    //         for(int j=0;j<size2;j++){
    //             if(array[i]==arr[j]){
    //                 cout<< array[i]<<" ";
    //                 break;
    //             }
    //         }
    //     }
   
    // cout<<endl;
        
    // }
    
    // int main(){
    //     int array[]={11,21,54,12};
    //     int arr[]={12,24,54};
    //     int size1= sizeof(array)/sizeof(array[0]);
    //     int size2= sizeof(arr)/sizeof(arr[0]);
        
    //     Intersection(array,arr,size1,size2);
        
    //     return 0;
    // }



    //unique
    
    
    
    
    void Unique(int array[],int size){
        
        for(int i=0; i<size ; i++){
            for(int j=0;j<size;j++){
                if(array[j] ^ array[i]){
                    cout<< array[j]<<" ";
                    break;
                }
            }
        }
        cout<< endl;
    }
    
    
 
    int main(){
        
        int array[]={56,77,9,9,56,77,12};
        int size= sizeof(array)/sizeof(array[0]);
        
        Unique(array,size);
        
        return 0;
        
    }




