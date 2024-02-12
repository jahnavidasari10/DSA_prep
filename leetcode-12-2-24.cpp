class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n = arr.size();
        int ans=0,count=0;
        for(int itr=0;itr<n;itr++){
           if(count==0){
               ans = arr[itr];
           }
           if(ans == arr[itr]){
               count++;
           }
           else{
               count-=1;
           }
    }
    return ans;
  }
};