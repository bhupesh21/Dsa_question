class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
   for(int i=0;i<nums.size();i++)  {
       int l=0,n=nums[i];
       while(n){
           l+=(n%10);
           n=n/10;
       }
       mp[l].push_back(nums[i]);
    }
        int sum=-1;
        for(auto i:mp){
            if(i.second.size()!=1){
                int s;
                sort(i.second.begin(),i.second.end(),greater<int>());
                s=i.second[0]+i.second[1];
                sum=max(sum,s);
            }
        }
        return sum;
    }
};

