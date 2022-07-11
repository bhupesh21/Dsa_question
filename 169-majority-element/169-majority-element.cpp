class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         int count;
//       //  int cval;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==nums[i+1]){
//                 count++;
//                 break;
//             }
//         }
//         return count;
//     }
        
    
        
      
       
//     };

        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};
        