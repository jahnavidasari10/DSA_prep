class Solution {
public:
    bool canMerge(string a,string b){
        vector<int>freq(26,0);
        for(char ch:a){
            if(freq[ch-'a']==1){
                return false;
            }
            freq[ch-'a']++;
        }
        for(char ch:b){
            if(freq[ch-'a']==1 || freq[ch-'a']==-1){
                return false;
            }
            freq[ch-'a']--;
        }
        return true;
    }
    int solve(vector<string>&arr,int index,string ans){
        if(index==-1){
            return ans.length();
        }
        int include=0;
        if(canMerge(arr[index],ans)){
            include=solve(arr,index-1,ans+arr[index]);
        }
        int exclude=solve(arr,index-1,ans);
        return max(include,exclude);
    }
    int maxLength(vector<string>& arr) {
        return solve(arr,arr.size()-1,"");
    }
};