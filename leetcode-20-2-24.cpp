class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s1=n*(n+1)/2;
        for(int i=0;i<nums.size();i++){
            s1-=nums[i];
        }
        return s1;
    }
};