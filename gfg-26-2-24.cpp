//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	 vector<string> ans;
        void find(string& s, int i, string temp){
            if (i == s.size()) {
                if (!temp.empty()) {
                    ans.push_back(temp);
                }
                return;
            }
            
            find(s, i+1, temp + s[i]);
            find(s, i+1, temp);
        }
        vector<string> AllPossibleStrings(string s){
            find(s, 0, "");
            sort(ans.begin(), ans.end());
            return ans;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends