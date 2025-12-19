class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
       vector<int>ans(arr.size());
       stack<int>st;

       for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }

            if(st.empty()){
                ans[i]=-1;
            
            }else{
                ans[i]=st.top();
            }
            st.push(arr[i]);
       }
       return ans;
    }
};
