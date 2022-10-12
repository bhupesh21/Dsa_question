class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
        vector<vector<int>>result;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][1]<newIntervals[0]){
                result.push_back(intervals[i]);
            }
            else if(intervals[i][0]>newIntervals[1]){
                result.push_back(newIntervals);
                newIntervals=intervals[i];
                
            }
            else{
                newIntervals[0]=min(intervals[i][0],newIntervals[0]);
                newIntervals[1]=max(newIntervals[1],intervals[i][1]);
            }
        }
        result.push_back(newIntervals);
        return result;
        
    }
};