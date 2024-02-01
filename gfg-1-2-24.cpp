//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        if(s.length()<26){
            return 0;
        }
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            if(tolower(s[i])>96 && tolower(s[i])<123){
                mp[tolower(s[i])]++;
            }
        }
        if(mp.size()==26){
            return 1;
        }
        return 0;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends