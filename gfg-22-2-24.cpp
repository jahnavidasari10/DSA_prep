//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
     vector<vector<int>> dp;
    const int MOD=1000000007;
    int  solve(string s, string t, int i, int j)
    {
        if(j == t.size())
            return 1;
        if(i == s.size())
            return 0;
            
        if(dp[i][j]!= -1)
            return dp[i][j];
            
        int a = 0, b = 0;
        if(s[i] == t[j])
        {
            a = solve(s,t,i+1,j+1);
            a = a%MOD;
        }
        b = solve(s,t,i+1,j);
        b = b%MOD;
        return dp[i][j]=(a+b)%MOD;
    }
    int subsequenceCount(string s, string t)
    {
        dp = vector<vector<int>>(1005,vector<int>(1005,-1));
        return solve(s,t,0,0);  //Your code here
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends