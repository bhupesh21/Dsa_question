class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>map;
        vector<string>ans;
        for(int i=0;i<heights.size();i++){
            map[heights[i]]=names[i];
        }
        for(auto x:map){
            ans.push_back(x.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};