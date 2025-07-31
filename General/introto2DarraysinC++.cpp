#include <iostream>
#include <limits.h>
using namespace std;

// bool ispresent(int arr[][4],int target,int row,int col) {
// 	for(int row=0; row<3; row++) {
// 		for(int col=0; col<4; col++) {
// 			if(target==arr[row][col]) {
// 				return 1;
// 			}
// 		}

// 	}
// 	return 0;

// }
// //to ptint row wise sum
// void printsumR(int arr[][4],int row,int col) {
//     cout<<"the sum of rows "<<endl;
//         for (int row = 0; row < 3; row++) {
//             int sum=0;
//             for (int col = 0; col < 4; col++) {
//                 sum+=arr[row][col];
//         }
//         cout <<sum<<" ";
//     }


// }

// //to print sum column wise
// void printsumC(int arr[][4],int row,int col) {
//     cout<<"the sum of col "<<endl;
//     int sum1=0;
//         for (int col = 0; col < 4; col++) {
//             for (int row = 0; row < 3; row++) {
//                 sum1+=arr[row][col];
//         }
//         cout <<sum1<<" ";
//     }


// }

// bool lagestsumofrows(int arr[][4],int row,int col){
//     int maxi=INT_MIN;
    
//     int rowindex=-1;
    
//         for (int row = 0; row < 3; row++) {
//             int sum1=0;
//             for (int col = 0; col < 4; col++) {
//                 sum1+=arr[row][col];
//         }
//         if(maxi<sum1){
//             maxi=sum1;
//             rowindex=row;
//         }
        
//     }
//     cout<<"the maximum sum by an row is "<< maxi<<endl;
//     return rowindex;

// }
int main() {
	int arr[3][4];

	//row wise
	cout<<"enter the elements "<<endl;
	for (int row=0; row<3; row++) {
		for (int col = 0; col < 4; col++) {
			cin >> arr[row][col];
		}
	}

	//col wise

	// for (int col = 0; col < 4; col++) {
	//     for (int row = 0; row < 3; row++) {
	//         cin >> arr[row][col];
	//     }
	// }


	//print 
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 4; col++) {
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}


	// cout<<"enter an element to search "<<endl;
	// int target;
	// cin>>target;

	// if(ispresent(arr,target,3,4)) {
	// 	cout<<"element found "<<endl;

	// } else {
	// 	cout<<"not found "<<endl;
	// }
	
	// printsumR(arr,3,4);
	// cout<<endl;
	
	// printsumC(arr,3,4);
	// cout<<endl;
	
	// int ansindex=lagestsumofrows(arr,3,4);
	// cout<<"largest value index will be "<<ansindex<<endl;

	return 0;
}





// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>ans;
        
//         int row=matrix.size();
//         int col=matrix[0].size();

//         int count=0;
//         long long total=(long long)row*col;

//         int startingrow=0;
//         int endingcolumn=col-1;
//         int endingrow=row-1;
//         int startingcol=0;

//         while(count<total){
//             for(int index=startingcol;count<total  && index<=endingcolumn;index++){
//                 ans.push_back(matrix[startingrow][index]);
//                 count++;
//             }

//             startingrow++;
//             for(int index=startingrow;count<total  && index<=endingcolumn;index++){
//                 ans.push_back(matrix[index][endingcolumn]);
//                 count++;
                
//             }
//             endingcolumn--;
//             for(int index=endingcolumn;count<total  && index>=startingcol;index--){
//                 ans.push_back(matrix[endingrow][index]);
//                 count++;
//             }
//             endingrow--;
//             for(int index=endingrow;count<total  && index>=startingrow;index--){
//                 ans.push_back(matrix[index][startingcol]);
//                 count++;
//             }
//             startingcol++;

//         }
//     return ans;
 
//     }
// };