
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<=nums[i]){
                s+=nums[i]-nums[i+1]+1;
                nums[i+1]+=nums[i]-nums[i+1]+1;
            }    
        }
        return s; 
    }
};
