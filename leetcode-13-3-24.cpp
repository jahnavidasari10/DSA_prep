class Solution {
public:
    int pivotInteger(int n) {
        int start=0;
        int end=n;
        if(n==1){
            return 1;
        }
        int mid=(end+start)/2;
        while(start<=end){
            int sum1=mid*(mid+1)/2;
            int sum2=n*(n+1)/2-sum1+mid;
            if(sum1==sum2){
                return mid;
            }
            else if(sum1>sum2){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return -1;
    }
};