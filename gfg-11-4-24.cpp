//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int grayToBinary(int n)
    {
        if(n==0) return 0;
        string bin = "";
        while(n){
            bin += to_string(n%2); n /= 2;
        } 
        reverse(bin.begin(), bin.end());
        string gray = "";
        gray.push_back(bin[0]);
        for(int i=1; i<bin.size(); i++){ 
            int idea = (bin[i]-'0')^(gray.back()-'0');
            gray += to_string(idea);
        }
        return stoi(gray, 0, 2);
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends