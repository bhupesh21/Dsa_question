class Solution {
public:
    bool rotateString(string s, string s1) {
        if(s.size()!=s1.size()){
            return 0;
        }
        s+=s;
       if(s.find(s1)!=string::npos)
           return true;
        return false;
    }
};