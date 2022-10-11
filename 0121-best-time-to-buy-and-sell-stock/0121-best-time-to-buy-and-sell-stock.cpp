class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mindiff=INT_MAX;
        int maxdiff=INT_MIN;
        for(int i=0;i<prices.size();i++){
            mindiff=min(mindiff,prices[i]);//1
            maxdiff=max(maxdiff,prices[i]-mindiff);//6
           
            
        }
        return maxdiff;
    }
};