class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
       //  for(int i=0;i<nums1.size();i++){
         //    for(int j=0;i<nums2.size();i++){
        int i=0,j=0;
        while(i<nums1.size() &&j<nums2.size()){
                if(nums1[i]==nums2[j]){
                    //v.push_back(nums1[i]);
                    v.push_back(nums1[i]);
                 i++;
                    j++;
                   // break;
                }
                else if(nums1[i]>nums2[j]){
                    j++;
                }
                else{
                    i++;
                }
                
                
         
    
        
        }
        
        return v;
        
    }
};