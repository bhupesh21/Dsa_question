class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxdiff=0;
        for(int i=0;i<nums.size();i++){
            //if(nums[i]+nums[i+1])
          //  maxdiff=nums[i]+nums[i+1];
            if(nums[i]==0){
                maxdiff=max(maxdiff,count);
                count=0;
            }
            
            else
                count++;
        }
        maxdiff=max(maxdiff,count);
        return maxdiff;
                
            
            
            
        //     if(nums[i]==nums[i+1])
        //         count++;
        //     break;
        // }
        // return count;
    }
};