class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length();
        int count=0;
        for(char &ch:s){
            count+=ch-'0';
        }
        string ans="";
        for(int i=0;i<count-1;i++){
            ans+="1";
        }
        for(int i=0;i<n-count;i++){
            ans+="0";
        }
        ans+="1";
        return ans;
    }
};