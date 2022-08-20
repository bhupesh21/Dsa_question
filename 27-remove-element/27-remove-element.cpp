class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
       // vector<int>v;
   //    sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
               // v.push_back(nums[i]);
                nums[count++]=nums[i];
            
              //  v.pop(nums[i]);
            }
            
                
            
            
        }
        return count;
        
    }
};
