class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int ans=0;
        int totalBricks=0;
        int n=heights.size();
        priority_queue<int>pq;
        for(;ans<n-1;ans++){
            if(heights[ans]>=heights[ans+1]){
                continue;
            }
            int diff=heights[ans+1]-heights[ans];
            if(totalBricks+diff<=bricks){
                totalBricks+=diff;
                pq.push(diff);
            }
            else if(ladders>0){
                if(!pq.empty() && pq.top()>=diff){
                    totalBricks=totalBricks-pq.top()+diff;
                    pq.pop();
                    pq.push(diff);
                }
                ladders--;
            }
            else{
                break;
            }
        }
        return ans;
    }
};