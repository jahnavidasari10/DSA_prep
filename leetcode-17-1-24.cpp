class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        set<int>s;
        for(auto k:mp){
            s.insert(k.second);
        }
        return s.size()==mp.size();
    }
};