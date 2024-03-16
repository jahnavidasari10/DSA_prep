class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]==0)?-1:1;
            auto it=mp.find(sum);
            if(sum==0){
                if(ans<i+1){
                    ans=i+1;
                }
            }
            else if(it!=mp.end()){
                if(ans<i-it->second){
                    ans=i-it->second;
                }
            }
            else if(it==mp.end()){
                mp.insert({sum,i});
            }
        }
        return ans;
    }
};