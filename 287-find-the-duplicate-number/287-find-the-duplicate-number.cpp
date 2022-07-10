class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       // vector<int>v;
        int ans;
      sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
               ans=nums[i];
            break;
        }
    }
                
        
        return ans;
    }
};