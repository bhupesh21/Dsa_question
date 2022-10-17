class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]]++;
        }
        for(auto x:mp){
            if(mp.size()>=26){
                return true;
            }
        }
        return false;
        
    }
};