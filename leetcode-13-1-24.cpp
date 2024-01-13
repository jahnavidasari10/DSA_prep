class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<t.length();i++){
            mp[t[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            mp[s[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            ans+=max(0,mp[i]);
        }
        return ans;
    }
};