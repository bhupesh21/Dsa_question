class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
            vector<int>ans;
            int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans.push_back(sum);
        }
        vector<int>sol(queries.size(),0);
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<nums.size();j++){
                if(ans[j]<=queries[i])
                    sol[i]=j+1;
                else
                    break;
            }
        }
        return sol;
        
    }
};