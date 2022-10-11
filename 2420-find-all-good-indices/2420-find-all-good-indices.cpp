class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>pref(n,1);
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1])
                pref[i]+=pref[i-1];
            }
            vector<int>suff(n,1);
            for(int i=n-2;i>=0;i--){
                if(nums[i]<=nums[i+1])
                    suff[i]+=suff[i+1];
                }
                vector<int>ans;
                for(int i=1;i<n-k;i++){
                    if(pref[i-1]>=k && suff[i+1]>=k)
                        ans.push_back(i);
                }
                return ans;
            
            }
};