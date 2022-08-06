class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
     
        map<int,int> mpp ;
        
        for(int i=0; i<items1.size(); i++){
            mpp[items1[i][0]] = items1[i][1] ;
        }
        
        for(int i=0; i<items2.size(); i++){
            if(mpp.find(items2[i][0]) != mpp.end()){
                mpp[items2[i][0]] += items2[i][1] ;
            }
            else{
                mpp[items2[i][0]] = items2[i][1] ;
            }
        }
        
        vector<vector<int>> ans ;
        
        for(auto it: mpp){
            int i= it.first ;
            int j = it.second ;
            
            ans.push_back({i, j}) ;
        }
        
        return ans ;
    }
};