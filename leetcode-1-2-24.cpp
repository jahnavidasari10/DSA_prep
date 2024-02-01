class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans(nums.size()/3,vector<int>(3));
        int index=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=3){
            if(i+2<nums.size() && nums[i+2]-nums[i]<=k){
                ans[index]={nums[i],nums[i+1],nums[i+2]};
                index++;
            }
            else{
                return vector<vector<int>>();
            }
        }
        return ans;
    }
};

//BRUTE FORCE

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=3){
            vector<int>res;
            for(int j=i;j<i+3;j++){
                if(nums[j]-nums[i]<=k){
                    res.push_back(nums[j]);
                }
            }
            if(res.size()==3){
                ans.push_back(res);
            }
            //ans.push_back(res);
        }
        int size=n/3;
        if(ans.size()!=size){
            ans.clear();
            return ans;
        }
        return ans;
    }
};