class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<int>st;
        vector<int> result(temps.size());
        for(int i=0;i<temps.size();i++){
            while(st.size()&& temps[st.top()]<temps[i]){
                result[st.top()]= i-st.top();
                st.pop();
            }
st.push(i);
        }
        return result;
    }
};