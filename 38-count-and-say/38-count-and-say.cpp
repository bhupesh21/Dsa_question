class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string s=countAndSay(n-1);
        string res;
        char c=s[0];
        int count=1;
    
        for(int i=1;i<s.length();i++)
            if(s[i]==c)
                count++;
            
            else{
                res+=to_string(count);
                res.push_back(c);
                c=s[i];
                count=1;
            }
            res+=to_string(count);
            res.push_back(c);
            return res;
        
    
    }
};
     
        
    //     if(n==1)
    //         return "1";
    //     string res,s=countAndSay(n-1);
    //     char c=tmp[0];
    //     int count=1;
    //     for(int i=1;i<tmp.size();i++)
    //         if(tmp[i]==c)
    //             count++;
    //     else{
    //         res+=to_string(count);
    //         res.push_back(c);
    //          c=tmp[i];
    //          count=1;
    //     }
    //      res+=to_string(count);
    //  res.push_back(c);
    //     return res;
    // }

//         int count=0;
//         int prev=n[0];
//         for(int i=0;i<n.size();i++){
            
//         }
        
//     }
// };