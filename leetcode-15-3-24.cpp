class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pro=1,count=0;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count++;
                continue;
            }
            else{
            pro*=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(count==0){
                ans[i]=pro/nums[i];
            }
            else if(count==1){
                if(nums[i]==0){
                    ans[i]=pro;
                }
                else{
                    ans[i]=0;
                }
            }
            else{
                ans[i]=0;
            }
        }
        return ans;
    }
};