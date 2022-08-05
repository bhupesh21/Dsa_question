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
        int si[129]={0},ti[129]={0};
        
        for(int i=0;i<s.size();i++)
            if(si[s[i]]!=ti[t[i]])return false;
            else si[s[i]]=ti[t[i]]=i+1;
            return true;
        
    }
};