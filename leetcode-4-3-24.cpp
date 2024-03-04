class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int start=0;
        int end=tokens.size()-1;
        int score=0;
        sort(tokens.begin(),tokens.end());
        while(start<=end){
            if(power>=tokens[start]){
                score+=1;
                power-=tokens[start];
                start+=1;
            }
            else if(start<end && score>0){
                score-=1;
                power+=tokens[end];
                end-=1;
            }
            else{
                return score;
            }
        }
        return score;
    }
};