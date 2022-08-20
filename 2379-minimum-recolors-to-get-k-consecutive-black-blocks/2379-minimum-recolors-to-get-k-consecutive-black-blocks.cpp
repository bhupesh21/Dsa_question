class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mini=INT_MAX;
        for(int i=0;i<blocks.size()-k+1;i++){
            int count=0;
            for(int j=i;j<i+k;j++){
                if(blocks[j]=='W'){
                    count++;
                }
            }
                mini=min(mini,count);
            }
            return mini;
        
        
    }
};