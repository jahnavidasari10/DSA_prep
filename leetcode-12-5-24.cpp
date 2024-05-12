class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n= grid.size();
        vector<vector<int>>v(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int maxm=0;
                int xp=i+3,yp=j+3;
                for(int k=i;k<xp;k++){
                    for(int l=j;l<yp;l++){
                        maxm=max(maxm,grid[k][l]);
                    }
                }
                v[i][j]=maxm;
            }
        }
        return v;
    }
};