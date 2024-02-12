//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        if(n==1){
            return n;
        }
        long long ans=0;
        long long cnt=1;
        for(int i=0;i<n;i++){
            long long pro=1;
            for(int j=0;j<=i;j++){
                pro=(pro*cnt)%1000000007;
                cnt++;
            }
            ans=(ans+pro)%1000000007;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends