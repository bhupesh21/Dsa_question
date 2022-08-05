class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // unordered_map(int,int)mp;
        // for(int i=0;i<s;i++){
        //     mp[s[i]]++;
        // }
        // // for(int i=0;i<t;i++){
        //     mp[t[i]]++;
        // }
        int sind[129]={0},tind[129]={0};
        
        for(int i=0;i<s.size();i++)
            if(sind[s[i]]!=tind[t[i]])return false;
            else sind[s[i]]=tind[t[i]]=i+1;
            return true;
        
    }
};