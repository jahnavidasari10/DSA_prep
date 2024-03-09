class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s(nums1.begin(),nums1.end());
        for(int num:nums2){
            if(s.contains(num)){
                return num;
            }
        }
        return -1;
    }
};