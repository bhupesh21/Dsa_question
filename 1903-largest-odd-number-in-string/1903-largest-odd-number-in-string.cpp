class Solution {
public:
    string largestOddNumber(string nums) {
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]%2==0)nums.pop_back();
            else break;
        }
        return nums;
    }
};

