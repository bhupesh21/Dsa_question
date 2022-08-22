class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans;
        for(int i=0;i<nums.size();i++){
          //  for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[i+1]){
               ans=nums[i];
                    break;
                }
            }
        
        return ans;
    }
};