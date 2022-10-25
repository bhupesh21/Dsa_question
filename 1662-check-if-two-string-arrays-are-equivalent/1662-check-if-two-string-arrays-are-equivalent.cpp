class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a1="",a2="";
        for(int i=0;i<word1.size();i++)a1+=word1[i];
            for(int j=0;j<word2.size();j++)a2+=word2[j];
               
        
        if(a1==a2)
            return true;
        return false;
        
    }
};