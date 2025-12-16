class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>ans;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                
                    ans.pop();

            }else if(operations[i]=="D"){
                    
                        int ch=ans.top();
                        ans.push(ch*2);
                    

                }else if(operations[i]=="+"){
                    
                        int ch1=ans.top();
                        ans.pop();
                        int ch2=ans.top();
                        ans.push(ch1);
                        ans.push(ch1+ch2);
                    
                }else{
                    ans.push(stoi(operations[i]));
                }

            }
        
        
        int sum = 0;
        while(!ans.empty()){
            sum+=ans.top();
            ans.pop();
        }

        return sum;
    }
};