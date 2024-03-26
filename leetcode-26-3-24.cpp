class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int p=nums.size()+1;
    vector<int> a(p,0);
    int i,j;
// to fill hashtable with 1
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]>0 && nums[i]<nums.size()+1)
        a[nums[i]]++;
    }
    //to find the no.
    for(i=1;i<nums.size()+1;i++)
    {
        if(a[i]==0) return i;
    }

    return i;
    }
};