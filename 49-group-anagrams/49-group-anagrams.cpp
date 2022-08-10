class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         sort(strs.begin(),strs.end());
//         if(strs.empty())return " ";
        unordered_map<string,vector<string>>mp;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>>anagram;
        for(auto p:mp){
            anagram.push_back(p.second);
        }
        return anagram;
        
    }
};