//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int solve(string &A,string &B,string &C,int i,int j,int k,vector<vector<vector<int>>>&dp){
            if(i==A.length()|| j==B.length()|| k==C.length()){
                return 0;
            }
            if(dp[i][j][k]!=-1){
                return dp[i][j][k];
            }
            if(A[i]==B[j] && B[j]==C[k]){
                return 1+solve(A,B,C,i+1,j+1,k+1,dp);
            }
            int q1=solve(A,B,C,i+1,j,k,dp);
            int q2=solve(A,B,C,i,j+1,k,dp);
            int q3=solve(A,B,C,i,j,k+1,dp);
            return dp[i][j][k]=max({q1,q2,q3});
        }
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            vector<vector<vector<int>>>dp(n1,vector<vector<int>>(n2,vector<int>(n3,-1)));
            return solve(A,B,C,0,0,0,dp);
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends