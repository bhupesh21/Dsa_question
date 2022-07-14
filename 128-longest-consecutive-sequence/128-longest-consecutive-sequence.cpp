class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
   int ans=nums[0];
        int a=1;
        int curr=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==ans+1){
                curr++;
            }
            else if(nums[i]!=ans){
                curr=1;
            }
            ans=nums[i];
            a=max(a,curr);
        }
        return a;
    }
};