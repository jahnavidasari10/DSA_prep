class Solution {
public:
    int solve(int n){
        vector<int>dp(n+1,INT_MAX);
        dp[0]=0;
        for(int target=1;target<=n;target++){
            int ans=INT_MAX;
            for(int i=1;i*i<=target;i++){
                int temp=i*i;
                ans=min(ans,dp[target-temp]+1);
            }
            dp[target]=ans;
        }
        return dp[n];
    }
    int numSquares(int n) {
        return solve(n);
    }
};