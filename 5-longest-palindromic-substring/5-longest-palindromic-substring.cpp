class Solution {
public:
    string longestPalindrome(string s) {
        
        
        if(s.length() == 0 || s.length() == 1) return s;
        
        
        int start= 0;
        int maxLen = 1;
        
        int mid = 0;
        while(mid < s.length()){
           int midBegin = mid;
            int midEnd = mid;
            
            
            while( midEnd + 1 < s.length() && s[midEnd] == s[midEnd + 1]){ 
                midEnd++ ; 
            }    
            mid = midEnd + 1;
          
            int l =midBegin;
            int r= midEnd;
            
            
            while(l- 1 >= 0 && r + 1 < s.length() && s[l- 1] == s[r + 1]){
                    l--;
                    r++;
            }
            
        
            int currLen = r - l + 1;
            if( currLen  > maxLen ){
                start = l;
                maxLen = currLen;
            }
        }
        
        return s.substr(start, maxLen);
    }
};
    
