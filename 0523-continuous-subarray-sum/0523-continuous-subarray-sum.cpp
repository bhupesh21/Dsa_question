class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int prefixsum=0;
        map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int remainder=prefixsum%k;
            if(mp.count(remainder)){
                int len=i-mp[remainder];
                if(len==1)continue;
                if(len>1)return true;
            }
            mp[remainder]=i;
        }
        return false;
        
    }
};