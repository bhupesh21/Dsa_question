class Solution {
public:
    bool isValid(string s) {
        stack<int>stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stk.push(s[i]);
            }
            else{
              if(stk.size()==0)return false;
                char ch=stk.top();
                stk.pop();
                if((s[i]==')' and  ch=='(' )or(s[i]==']' and ch=='[' )or(s[i]=='}' and ch=='{') )continue;
                   else
                   return false;
            }
        }
       return stk.empty();
       // return true;
                  
    }
};