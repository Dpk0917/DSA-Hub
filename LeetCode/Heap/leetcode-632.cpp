class Solution {
public:

    // class node {
    // public:
    //     int data;
    //     int row;
    //     int col;

    //     node(int d, int i, int j) {
    //         data = d;
    //         row = i;
    //         col = j;
    //     }
    // };

    // class compare {
    // public:
    //     bool operator()(node* a, node* b) {
    //         return a->data > b->data;
    //     }
    // };

    vector<int> smallestRange(vector<vector<int>>& nums) {

        // int k = nums.size();

        // int mini = INT_MAX;
        // int maxi = INT_MIN;

        // priority_queue<node*, vector<node*>, compare> minheap;

        // // push first element of each list
        // for (int i = 0; i < k; i++) {

        //     int element = nums[i][0];

        //     mini = min(mini, element);
        //     maxi = max(maxi, element);

        //     minheap.push(new node(element, i, 0));
        // }

        // int start = mini;
        // int end = maxi;

        // while (!minheap.empty()) {

        //     node* temp = minheap.top();
        //     minheap.pop();

        //     mini = temp->data;

        //     // update answer
        //     if (maxi - mini < end - start) {
        //         start = mini;
        //         end = maxi;
        //     }

        //     // move forward in same list
        //     if (temp->col + 1 < nums[temp->row].size()) {

        //         int nextVal = nums[temp->row][temp->col + 1];

        //         maxi = max(maxi, nextVal);

        //         minheap.push(
        //             new node(nextVal, temp->row, temp->col + 1)
        //         );
        //     }
        //     else {
        //         break;
        //     }
        // }

        // return {start, end};


        
    }
};
