class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>n/2)
                return it.first;
        }
        return -1;
    }
};
//         map<int,int>m;
//         int n = nums.size();
//         for(int i=0;i<nums.size();i++)
//         {
//             m[nums[i]]++;//for count
//         }
        
//         for(auto it:m)
//         {
//             if(it.second >n/2)
//                 return it.first;
//         }
//         return -1;
//     }
// };
//         int n = nums.size();
//         for(int i=0;i<n;i++)
//         {
//             int count=0;
//             for(int j=0;j<n;j++)
//             {
//                 if(nums[i]==nums[j];
//                 {
//                     count++;
//                 }
//             }
            
//             if(count>n/2)
//             {
//                 return nums[i];
//             }
//         }
        
//         return -1;
//     }
// };