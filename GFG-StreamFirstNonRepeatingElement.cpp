class Solution {
  public:
    string FirstNonRepeating(string &s) {
        // Code here
        unordered_map<char,int>count;
        queue<char>q;
        string ans="";
        
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            count[ch]++;        // 1. update
            q.push(ch);         // 2. enqueue
    
            // 3. purge repeating chars
            while (!q.empty() && count[q.front()] > 1) {
                q.pop();
            }
    
            // 4. append answer exactly once
            if (q.empty())
                ans.push_back('#');
            else
                ans.push_back(q.front());
            }
        
        return ans;
    }
};