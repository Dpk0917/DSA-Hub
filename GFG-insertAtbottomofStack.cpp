// User function Template for C++

class Solution {
    private:
    void solve(stack<int>&s, int x){

    if(s.empty()){
        s.push(x);
        return;
    }

   int num=s.top();
   s.pop();

   solve(s,x);

   s.push(num);
}

  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        
        solve(st,x);
        return st;
    }
};