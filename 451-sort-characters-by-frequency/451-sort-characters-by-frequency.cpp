class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++)
            freq[s[i]]++;
   
        priority_queue<pair<int,char>>q;
        for(auto[s,freq]:freq)   q.push({freq,s});
         
    
    string ans;
    pair<int,char>curr;
    while(!q.empty()){
        curr=q.top();
        q.pop();
    ans+=string(curr.first,curr.second);
    }
    return ans;
}
};
    