class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       // int count=0;
        int ans=-1;
        int max=-1;
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(auto x:map){
            if(x.first%2==0 && x.second>max){
                max=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};