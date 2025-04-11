class Solution {
    private:
    bool valid(char ch){
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')||(ch>='A' && ch<='Z')){
            return 1;
    
        }else{
            return 0;
    
        }
    }
    
    char tolowercase(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }else{
            char temp=ch-'A'+'a';
            return temp;
        }
      
    }
    
    bool checkingpalindrome(string k){
        int start=0;
        int end=k.length()-1;
    
        while(start<=end){
            if(k[start]!=k[end]){
                return 0;
    
            }else{
                start++;
                end--;
    
            }
            
        }
        return 1;
    
    }
    public:
    
    
        bool isPalindrome(string s) {
            string temp="";
            for(int i=0;i<s.length();i++){
                if(valid(s[i])){
                    temp.push_back(s[i]);
    
                }
            }
            for(int j=0;j<temp.length();j++){
                temp[j]=tolowercase(temp[j]);
            }
            
        return checkingpalindrome(temp);
    
        while(s==" "){
            return 1;
        }
    
        return 0;
        }
    };