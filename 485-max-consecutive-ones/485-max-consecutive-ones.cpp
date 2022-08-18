class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxdiff=0;
        for(int i=0;i<nums.size();i++){
       
            if(nums[i]==0){
                maxdiff=max(maxdiff,count);
                count=0;
            }//2&&3
            
            else
                count++;//2&&3
        }
        maxdiff=max(maxdiff,count);
        return maxdiff;
                
            
         
    }
};