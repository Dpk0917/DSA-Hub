// User function Template for C++

class Solution {
private:
void insertATbottom(stack<int> &s,int x){

    if(s.empty()){
        s.push(x);
        return;
    }

   int num=s.top();
   s.pop();

   insertATbottom(s,x);

   s.push(num);

}

  public:
    void Reverse(stack<int> &St) {
        
    if(St.empty()){
        return;
    }

    int num=St.top();
    St.pop();

    Reverse(St);

    insertATbottom(St,num);
    
    }
};