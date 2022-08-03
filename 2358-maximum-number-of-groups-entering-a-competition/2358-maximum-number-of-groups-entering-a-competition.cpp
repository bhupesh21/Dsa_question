class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        int sum=0;
        int count=0;
        int i=1;
        while(sum<grades.size()){
            sum+=i;
            if(sum>grades.size())
                break;
            count++;i++;
        }
        return count;
    }
};
  