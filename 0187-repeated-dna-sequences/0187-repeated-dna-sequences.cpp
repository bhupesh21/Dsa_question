class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>result;
        if(s.size()<10)return result;
        for(int i=0;i<s.size()-9;i++)
            mp[s.substr(i,10)]++;
            
            for(auto x:mp)
                if(x.second>1)
                    result.push_back(x.first);
           
        
         return result;
    }
};
