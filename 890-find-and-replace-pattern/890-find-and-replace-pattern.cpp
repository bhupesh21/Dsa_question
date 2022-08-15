class Solution {
    bool match(string a,string b){
        int n=a.size();
        unordered_map<char,char>mp1,mp2;
        for(int i=0;i<n;i++){
            if(mp1.find(a[i])!=mp1.end()&&mp1[a[i]]!=b[i])
                return false;
            if(mp1.find(a[i])==mp1.end() && mp2.find(b[i])!=mp2.end())
               return false;
               mp1[a[i]]=b[i];
               mp2[b[i]]=a[i];
        }
               return true;
    }
public:
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        for(string word:words){
            if(match(pattern,word))
                ans.push_back(word);
        }
        return ans;
    }
};