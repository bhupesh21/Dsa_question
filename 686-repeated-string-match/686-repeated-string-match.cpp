class Solution {
public:
    int repeatedStringMatch(string a, string b) {
                string s="";
        int count = 0;
        while(s.size()<b.size())
        {
            s+=a;
            count++;
        }
        if(s.find(b)!=string::npos)
            return count;
        s+=a;
        count++;
        if(s.find(b)!=string::npos)
            return count;
        
        return -1;
        
    }
};
//         vector<string>v;
//         int count=0;
//         for(int i=0;i<a.size();i++){
//             for(int j=0;j<b.size();j++){
//                 if(a[i]<b[j]){
//                  v.push_back(i+j);   
//                 }
//             }
//         }
//                for(int i=0;i<a.size();i++){
//             for(int j=0;j<b.size();j++){
//                 if(a[i]==b[j]){
//                     count++;

//                 }
//                 return -1;
//             }
            
//         }
//         return count;
        
//     }
// };