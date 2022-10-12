class LUPrefix {
public:
    int max=0;
    map<int,int>mp;
    LUPrefix(int n) {
        max=0;
    }
    
    void upload(int video) {
        mp[video]++;
        while(mp[max+1]>0){
            max++;
        }
    }
    
    int longest() {
        return max;
    }
};
