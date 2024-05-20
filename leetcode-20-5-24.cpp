class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n=  nums.size();
        for(int i=0;i<n;i++){
            sum = sum |nums[i];
        }
       return  sum * pow(2,n-1);
    }
};