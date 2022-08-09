class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        
        
          int ptr1=0;
        int ptr2=0;//        int q=0;
        while(ptr1<ransomNote.size() and ptr2<magazine.size())
        {
            if(ransomNote[ptr1]==magazine[ptr2]){
                ptr1++;
                ptr2++;
        }
            else{
                ptr2++;
            }
        }
        if(ptr1==ransomNote.size())
            return true;
            return false;
        }
    };
    
 