class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int>m;
       long long int count=0;
        for(int i=0;i<nums.size();i++){
            if(m.find(i-nums[i])==m.end()){
                count+=i;
                m[i-nums[i]]=1;
            }
               else{
                   count=count+i-m[i-nums[i]];
                   m[i-nums[i]]++;
               }
               }
               
               return count;
               
               }
               
               };
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(i<j && j-1!=nums[j]-nums[i])
//                 {
//                     count++;
//                 }
                
//                 i++;    
//             }
//         }
//         return count;
//     }
// };