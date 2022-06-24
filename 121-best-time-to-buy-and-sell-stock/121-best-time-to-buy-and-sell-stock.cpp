class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxdiff=0;
        int mindiff=INT_MAX;
        
for(int i=0;i<prices.size();i++){
   mindiff=min(mindiff,prices[i]);
     maxdiff=max(maxdiff,prices[i]-mindiff);
    
}
    return maxdiff;    
    }
};