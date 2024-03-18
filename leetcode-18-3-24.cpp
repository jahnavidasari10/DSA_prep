class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end());
        int lastPoint=p[0][1];
        int ans=1;
        for(auto point:p){
            if(point[0]>lastPoint){
                ans++;
                lastPoint=point[1];
            }
            lastPoint=min(point[1],lastPoint);
        }
        return ans;
    }
};