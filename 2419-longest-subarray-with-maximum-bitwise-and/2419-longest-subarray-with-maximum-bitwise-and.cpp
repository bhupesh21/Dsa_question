class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int N=nums.size();
        int maxelem=*max_element(nums.begin(),nums.end());
        int sub=0,ans=1;
        for(int i=0;i<N;i++){
            if(nums[i]==maxelem){
                sub++;
                ans=max(ans,sub);
            }
                else{
                    sub=0;
                }
           
                    
                }
         return ans;
    }
                
};