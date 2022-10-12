class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
      priority_queue<pair<int,int>>q;
        for(auto x:mp){
            q.push({x.second,x.first});
        }
        while(k--){
            v.push_back(q.top().second);
            q.pop();
        }
        return v;
    }
};