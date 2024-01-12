class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>s;
        int m=q.size()-k;
        for(int i=0;i<k;i++){
            int front=q.front();
            q.pop();
            s.push(front);
        }
        for(int i=0;i<k;i++){
            int front=s.top();
            s.pop();
            q.push(front);
        }
        for(int i=0;i<m;i++){
            int front=q.front();
            q.pop();
            q.push(front);
        }
        return q;
    }
};