//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int n = s.length();
        bool flag = false;
        if (s[0] == '-') {
            s[0] = '0';
            flag = true;
        }
        
        int ans = 0;
        int i = 0;
        while (n > 0) {
            if (s[i] < '0' || s[i] > '9') {
                return -1;
            }
            int m = pow(10, n-1);
            int digit = s[i] - '0';
            ans += digit * m;
            
            n--;
            i++;
        }
        
        if (s[0] == '0' && flag) {
            ans *= -1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends