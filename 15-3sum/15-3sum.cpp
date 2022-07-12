class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        vector<vector<int>>res;
       
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 ||(i>0 && nums[i]!=nums[i-1])){
                int lo=i+1,hi=nums.size()-1,sum=0-nums[i];
                while(lo<hi){
                    if(nums[lo]+nums[hi]==sum){
                        vector<int>ans;
                        ans.push_back(nums[i]);
                        ans.push_back(nums[lo]);
                        ans.push_back(nums[hi]);
                        res.push_back(ans);
                        
                        while(lo<hi && nums[lo]==nums[lo+1])lo++;
                        while(lo<hi && nums[hi]==nums[hi-1])hi--;
                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi]<sum)lo++;
                    else hi--;
                    }
                }
            }
        return res;
        }
};
//          vector<vector<int>>v1;
//         vector<int>v;
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n-1;j++){
//                 for(int k=j+1;k<n-1;k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         v.push_back(nums[i]);
//                         v.push_back(nums[j]);
//                         v.push_back(nums[k]);
                        
//                         v1.push_back(v);
//                         break;
                    
                        
//                     }
//                 }
//             }
//         }
//         return v1;
        
//     }
// };
        
        