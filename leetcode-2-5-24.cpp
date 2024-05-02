class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int l=0,r=n-1;
        while(l<r){
            if(-nums[l]==nums[r]){
                return nums[r];
            }
            else if(-nums[l]>nums[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return -1;
    }
};