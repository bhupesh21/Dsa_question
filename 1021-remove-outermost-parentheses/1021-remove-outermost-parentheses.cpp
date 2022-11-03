class Solution {
public:
    string removeOuterParentheses(string s) {
       int count=0;
    string ans;
        for(char c:s){
            if(c=='(' && count++ > 0)ans+=c;
            if(c==')' && count --> 1)ans+=c;
       
        }
    return ans;
}
};
        
