class Solution {
public:
    int strStr(string haystack, string needle) {
    
        int found=haystack.find(needle);
    if (found!=string::npos)
        return found;
        return -1;
    }
};
        
//         for(int i=0;i<haystack.length();i++){
//             for(int j=0;j<needle.length();j++){
//                 if(haystack.find(needle)){
//                 v.push_back(i);           
//                 }
//                 return -1;
//             }
//         }
//     }
// };
            
               