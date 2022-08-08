class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
            int g=numsDivide[0];
        for(int nums:numsDivide)
            g=gcd(g,nums);
            sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() && nums[i]<=g;i++)
    
            if(g%nums[i]==0)
                return i;
            return -1;
        
        
    }
};
//         sort(nums.begin(),nums.end());
//         sort(numsDivide.begin(),numsDivide.end());
//         int count=0;
//         vector<int>v;
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<numsDivide.size();j++){
//                 if(nums[i]%numsDivide[j]==0){
//                     i=i+1;
//                     count++;
//                     break;
//                 }
//                else if(nums[i]%numsDivide[j]!=0){
//                    v.push_back(nums[i]);
//                  //  v.push_bck(numsDivide[j]);
//                }
                
//             }
//         }
//         return count;
        
//     }
// };

    
    