class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        int index=INT_MIN;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                index=i;
                break;
            }
        }
        int start=0;
        int end=index;
        while(start<end){
            swap(word[start++],word[end--]);
        }
        return word;
    }
};