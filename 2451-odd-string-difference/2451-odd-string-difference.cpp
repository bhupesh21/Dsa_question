class Solution {
public:
    string oddString(vector<string>& words) {
       map<vector<int>,vector<string>>m;
        int l=words.size();
        string t="";
        for(int i=0;i<l;i++){
            vector<int>v;
            for(int j=0;j<words[i].size()-1;j++){
                v.push_back(words[i][j+1]-words[i][j]);
            }
            m[v].push_back(words[i]);
        }
        for(auto &x:m){
            if(x.second.size()==1){
                t=x.second[0];
                break;
            }
        }
        return t;
        
        
    }
};