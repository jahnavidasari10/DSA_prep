//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int solve(int n,string s,vector<string>&dictionary,int index,unordered_set<string>&st){
        if(index==n){
            return true;
        }
        
        string temp;
        for(int i=1;i+index<=n;i++){
            temp=s.substr(index,i);
            if(st.find(temp)!=st.end()){
                if(solve(n,s,dictionary,index+i,st)){
                    return true;
                }
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        unordered_set<string>st;
        for(int i=0;i<n;i++){
            st.insert(dictionary[i]);
        }
        return solve(s.size(),s,dictionary,0,st);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends