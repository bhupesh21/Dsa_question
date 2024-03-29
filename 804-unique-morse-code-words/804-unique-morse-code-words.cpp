class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        
        for(int i=0;i<words.size();i++){
            string ans="";
            for(int j=0;j<words[i].size();j++){
                ans+=v[words[i][j]-'a'];
            }
            s.insert(ans);

        }
        return s.size();
    }
};