class Solution {
public:
    bool isAnagram(string s, string t) {
      //  for(int i=0;i<s.length();i++){
          //  for(int j=o;i<t.length();j++){
              if(s.length()!=t.length())
              {
                  return 0;
              }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
                if(s==t){
                    return true;
                }
                    return false;
    }
                
        };
        
        
    