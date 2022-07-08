class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int sum=0,count=nums[0];
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];//5
            count=max(sum,count);
            if(sum<0){
                sum=0;
            }
            
        }
        return count;
    }
        
        
//         int sum=0,count=nums[0];
//        for(int i=0;i<nums.size();i++){
            
//             sum+=nums[i];
//             count=max(sum,count);
//             if(sum<0){
//                 sum=0;
//             }
            
//         }
//         return count;
        
//     }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
};