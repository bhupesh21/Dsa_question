class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count=1;
        int n=s.size();
        for(int i=0;i<n;i++){
            int curr=1;
            while(i<n-1&& s[i+1]-s[i]==1)
                i++,curr++;
            count=max(count,curr);
        }
        return count;
        
    }
};