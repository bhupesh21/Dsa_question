class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                   // v.push_back(nums[j]);
                {
        
            int max=-1;
            for(int k=j;k<nums2.size();k++){
                if(nums2[k]>nums2[j]){
                    max=nums2[k];
                    break;
                }
            }
                v.push_back(max);
            }
            }
         
        }
        return v;
    }
    
};