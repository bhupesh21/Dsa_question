class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int count=nums[0];
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        count=max(count,sum);   
        if(sum<0)
        {
            sum=0;
        }
    }
        return count;
            
    }
};