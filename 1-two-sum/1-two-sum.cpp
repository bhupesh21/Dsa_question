class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int>v;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();++i){
            m[nums[i]]=i;
            
        }
        for(int i=0;i<nums.size();++i){
            if(m.find(target-nums[i])!=m.end())
            {
                if(m[target-nums[i]]!=i){
                    v.push_back(i);
                    v.push_back(m[target-nums[i]]);
                    break;
                }
            }
        }
        return v;
    }
};
//         vector<int>v;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     v.push_back(i);
//                 v.push_back(j);
//                 break;
//             }
//             }
//         }
    
//         return v;
// }
    
// };
  