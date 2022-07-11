class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                   // v.push_back(j);
                {
                    int max_val=-1;
                    for(int k=j;k<nums2.size();k++)
                    {
                        if(nums2[k]>nums2[j])
                        {
                            max_val=nums2[k];
                            break;
                        }   
                    }
                    v.push_back(max_val);
                }
            }
        }
        return v;}
        
    }; 
                
                
                
                
                

//                 if(nums1[1]<++nums2[j]){
//                     ans=nums2[j];
//                 }
               
//             }
             
//         }
       
//      return ans;
//     }
    
// };