class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int i=s.length()-1;
        for(i;i>=0;i--){
            if(s[i]==' '&& count>0){
                return count;
            }
            if(s[i]!=' '){
                count++;
            }
        }
        return count;
    }
};