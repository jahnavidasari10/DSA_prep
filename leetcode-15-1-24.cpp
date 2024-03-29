class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans(2);
        unordered_map<int,int>mp;
        int n=matches.size();
        for(int i=0;i<n;i++){
            mp[matches[i][1]]++;
        }
        for(auto i:mp){
            if(i.second==1){
                ans[1].push_back(i.first);
            }
        }
        for(int i=0;i<n;i++){
            if(mp[matches[i][0]]==0){
                ans[0].push_back(matches[i][0]);
                mp[matches[i][0]]=1;
            }
        }
        sort(ans[0].begin(),ans[0].end());
        sort(ans[1].begin(),ans[1].end());
        return ans;
    }
};