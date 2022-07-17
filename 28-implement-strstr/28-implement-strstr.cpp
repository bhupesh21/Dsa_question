class Solution {
public:
    int strStr(string haystack, string needle) {
    int found=haystack.find(needle);
    if (found!=string::npos)
    {
        return found;
    }
        return -1;
    }
};
      
        
// int found=haystack.find(needle);
//         if(found!=string::npos){
//             return found;
//         }
//                 return -1;
        
//     }
//     };
//         vector<int>v;
//         for(int i=0;i<haystack.size();i++){
//             for(int j=0;j<needle.size();j++){
//                 if(haystack.find(needle)){
//                     v.push_back(i);
                    
//                 }
              
                
//                 return -1;
//             }
           
//         }
//         return v;
//     }
//     };