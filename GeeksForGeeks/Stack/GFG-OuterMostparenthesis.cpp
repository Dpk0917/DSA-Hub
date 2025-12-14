class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string result="";
        int depth=0;
        
        for(int i=0;i<s.length();i++){
            char ch=s[i];
        if(ch=='('){
            if(depth>0){
                result+=ch;
                
            }
            
            depth++;
            
        }else if(ch==')'){
            depth--;
            
            if(depth>0){
                result+=ch;
            }
        }    
            
        }
        
        return result;
    }
};