class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums2.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            int element=nums1[i];
            if(i>0 &&nums1[i-1]==nums1[i]){
                continue;
            }
            for(int j=0;j<m;j++){
                if(element==nums2[j]){
                    v.push_back(element);
                    nums2[j]=-12345678;
                    break;
                }
            }
        }
        // for(int i=0;i<v.size()-1;i++){
        //     for(int j=i=1;j<v.size();j++){
        //         if(v[i]==v[j]){
        //             v.erase(v.begin()+v);
        //         }
        //     }
        // }
        return v;
    }
};