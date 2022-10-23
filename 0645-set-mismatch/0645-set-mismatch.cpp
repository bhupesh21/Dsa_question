class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>map1;
        vector<int>ans;
           for(int i=0;i<nums.size();i++){
             map1[nums[i]]++;
        }
        for(auto x:map1){
            if(x.second>1)
                ans.push_back(x.first);
            }
        
        for(int i=1;i<=nums.size();i++){
            if(map1[i]==0)
                ans.push_back(i);
            }
            return ans;
        }
    
};
            
            
                