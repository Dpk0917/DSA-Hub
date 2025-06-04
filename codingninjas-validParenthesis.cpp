bool isValidParenthesis(string s)
{
    // Write your code here.

    stack<char>strac;

    for(int i=0;i<s.length();i++){
        char ch=s[i];

        //taking input of all the opening bracket
        if(ch=='(' || ch=='{' || ch=='['){
            strac.push(ch);
        }
        //chosing barcket aana suru ho gaye
        else{
            if(!strac.empty()){
                char top=strac.top();
                if((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')){
                    strac.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(strac.empty()){
        return true;
    }else{
        return false;
    }
}