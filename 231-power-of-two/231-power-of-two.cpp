class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<2){
            return (n==1);
        }
        return (n%2== 0)&& isPowerOfTwo(n/2);
        
    }
};