class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
       // int n=grid.size();
        for(int i=0;i<grid.size();i++){//for matrix row
            for(int j=0;j<grid.size();j++){
                // if(grid[i][j]=grid[j][i]){
                for(int k=0;k<grid.size();k++){
                // if(grid[i][0]==grid[j][0]||grid[1][j]||grid[2][j])
                //     count++;
                    if(grid[i][k]!=grid[k][j])
                        break;
                if(k==grid.size()-1)
                    count++;
            }
            }
        }
        return count;
    }
    
};