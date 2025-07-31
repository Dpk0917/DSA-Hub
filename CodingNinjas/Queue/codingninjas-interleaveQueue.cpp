#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    stack<int>s;
    int mid=q.size()/2;
    
        for(int i=0;i<mid;i++){
            int val=q.front();
            q.pop();
            s.push(val);
        }
        
        while(!s.empty()){
            int val=s.top();
            s.pop();
            q.push(val);
        }
        
        for(int i=0;i<mid;i++){
            int val=q.front();
            q.pop();
            q.push(val);
        }
        
        for(int i=0;i<mid;i++){
            int val=q.front();
            q.pop();
            s.push(val);
        }
        
        while(!s.empty()){
            int val=s.top();
            s.pop();
            q.push(val);

            int val2=q.front();
            q.pop();
            q.push(val2);
        }

}