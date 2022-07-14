class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//         if(nums.size()==0){
//             return 0;
//         }
//         sort(nums.begin(),nums.end());
//    int ans=nums[0];
//         int a=1;
//         int curr=1;
//         for(int i=1;i<nums.size();i++){
//             if(nums[i]==ans+1){
//                 curr++;
//             }
//             else if(nums[i]!=ans){
//                 curr=1;
//             }
//             ans=nums[i];
//             a=max(a,curr);
//         }
//         return a;
//     }
// };
        
        //using map
        set<int>m;
        for(int num:nums){
            m.insert(num);
        }
        int longstreak=0;
        for(int num:nums){
            if(!m.count(num-1)){
                int current=num;
                int currentstreak=1;
             while(m.count(current+1)){
                 current+=1;
                 currentstreak+=1;
             }
                longstreak=max(longstreak,currentstreak);
               
        }
               }
               return longstreak;
               }
               
               };