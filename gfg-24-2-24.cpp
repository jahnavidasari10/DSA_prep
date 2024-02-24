//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int fun(int n,vector<int>&dp)
    {
        if(n==0)
        return 0;
        if(dp[n]!=-1)return dp[n];
        return dp[n]=max(n,max(n/2,fun(n/2,dp))+max(n/3,fun(n/3,dp))+max(n/4,fun(n/4,dp)));
        
        
    }
        int maxSum(int n)
        {
            //code here.
            vector<int>dp(n+1,-1);
            return fun(n,dp);
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends