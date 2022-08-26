class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        for(int i=0;i<30;i++){
            int n=pow(2,i);
            string ans=to_string(n);
            sort(ans.begin(),ans.end());
            if(ans==s)return true;
        }
        return false;
        
    }
};
