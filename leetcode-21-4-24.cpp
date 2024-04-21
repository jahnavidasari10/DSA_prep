class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        vector<int>vis(n,0);
        q.push(source);
        vis[source]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            if(front==destination){
                return true;
            }
            for(int i=0;i<graph[front].size();i++){
                if(!vis[graph[front][i]]){
                    q.push(graph[front][i]);
                    vis[graph[front][i]]=1;
                }
            }
        }
        return false;
    }
};