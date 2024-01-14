class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
      vector<int>ans;
      set<string>st;
      for(int i=0;i<M;i++){
          string s="";
          for(int j=0;j<N;j++){
              s+=matrix[i][j];
          }
          if(st.find(s)!=st.end()){
              ans.push_back(i);
          }
          else{
              st.insert(s);
          }
      }
      return ans;
    } 
};