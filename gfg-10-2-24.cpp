//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    
    long long rec(int i, int j, int currSum, int &n, int &k, vector<vector<int>> &arr, vector<vector<vector<long long>>> &dp){
        if(i==n-1 && j==n-1 && currSum+arr[i][j]==k) return 1;
        if(i>=n || j>=n || currSum>k) return 0;
        if(dp[i][j][currSum]==-1)
            dp[i][j][currSum] =rec(i+1, j, currSum+arr[i][j], n, k, arr, dp) + rec(i, j+1, currSum+arr[i][j], n, k, arr, dp);
        return dp[i][j][currSum];
    }


    
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        // set<vector<pair<int, int>>> st;
        vector<vector<vector<long long>>> dp(n, vector<vector<long long >>(n, vector<long long>(k+1, -1)));
        // return f(0,0, n, k, 0, arr, dp);
        return rec(0,0,0, n,k,arr, dp);
        // Code Here
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends