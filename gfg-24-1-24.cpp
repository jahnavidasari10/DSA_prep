//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
   bool isCyclic(unordered_map<int,list<int>>&adjList,unordered_map<int,bool>&vis,int node,int parent){
       vis[node]=1;
       for(auto i:adjList[node]){
           if(!vis[i]){
               if(isCyclic(adjList,vis,i,node)){
                   return true;
               }
           }
           else if(i!=parent){
               return true;
           }
       }
       return false;
   }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        unordered_map<int,list<int>>adjList;
        for(int i=0;i<m;i++){
            int u=adj[i][0];
            int v=adj[i][1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        unordered_map<int,bool>vis;
        if(isCyclic(adjList,vis,0,-1)) return 0;
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                return 0;
            }
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends