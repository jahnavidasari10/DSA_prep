class Solution {
  public:
    string removeKdigits(string S, int K) {
        int n=S.size();
        deque<int>dq;
        for(int i=0;i<n;i++){
            while(!dq.empty() && S[i]-'0'<dq.back() && K>0){
                dq.pop_back();
                K--;
            }
            dq.push_back(S[i]-'0');
        }
        while(K--){
            dq.pop_back();
        }
        string temp="";
        bool lzeo=true;
        for(auto x:dq){
            if(x==0  && lzeo)continue;
            lzeo=false;
            temp+=to_string(x);
        }
        return (temp=="")?"0":temp;
    }
};