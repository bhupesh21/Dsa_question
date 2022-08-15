class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;//to store  all subset'
        vector<int>curr;//to store current inividual subset that we build
       sort(nums.begin(),nums.end());//sort the arryay so that duplicate can adjacent
        helper(nums,ans,curr,0);//we start from 0 index
        return ans;
        
    }
    void helper(vector<int>&nums,vector<vector<int>>& ans,vector<int>&curr,int idx){
        ans.push_back(curr);//we incude current subset into final ans
        for(int i=idx;i<nums.size();i++){//check for all possiblites
if(i>idx && nums[i]==nums[i-1])
    continue;//if duplicate we will continue
            curr.push_back(nums[i]);
            helper(nums,ans,curr,i+1);
            curr.pop_back();//to get subset without nums[i]
        }
    }
};