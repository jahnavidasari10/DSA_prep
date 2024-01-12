class Solution {
public:
    bool halvesAreAlike(string s) {
        string first="";
        string second="";
        for(int i=0;i<s.length()/2;i++){
            first+=tolower(s[i]);
        }
        for(int i=s.length()/2;i<s.length();i++){
            second+=tolower(s[i]);
        }
        int cfirst=0,csecond=0;
        for(char ch:first){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                cfirst++;
            }
        }
        for(char ch:second){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                csecond++;
            }
        }
        return cfirst==csecond;
    }
};