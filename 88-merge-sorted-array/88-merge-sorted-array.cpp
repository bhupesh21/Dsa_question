// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    int arr3[n+m];
//     int k = 0;
//     for (int i = 0; i < n; i++) {
//       arr3[k++] = nums1[i];
//     }
//     for (int i = 0; i < m; i++) {
//       arr3[k++] = nums2[i];
//     }
//     sort(arr3,arr3+m+n);
//     k = 0;
//     for (int i = 0; i < n; i++) {
//       nums1[i] = arr3[k++];
//     }
//     for (int i = 0; i < m; i++) {
//       nums2[i] = arr3[k++];
//     }

//   }

// };
        
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        for(int i=m;i<nums1.size();i++){
            nums1[i]=nums2[j];
                j++;
            
        }
            sort(nums1.begin(),nums1.end());
                return;
        }
        
    };
//         int j=0;
//         for(int i=m; i<nums1.size(); i++){
//             nums1[i]=nums2[j];
//             j++;
//         }
//         sort(nums1.begin(), nums1.end());
//         return;
//     }
// };
        
        
//      for(int i=0;i<nums1.size();i++){
//          for(int j=0;j<nums2.size();j++){
//              if(nums1[i]>nums2[j])
//                  swap(nums1[i],nums2[j]);
//              i++;
//              j++;
//              break;
             
//          }
         
         
//      }

//         for(int i=0;i<nums1.size();i++){
//          for(int j=i+1;j<nums2.size();j++){
//              if(nums1[i]>=nums2[j]){
//                  swap(nums1[i],nums2[j]);
//              }
//          }
//          }
//         }
    
//     };