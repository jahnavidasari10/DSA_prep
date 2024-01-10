class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    int len=0;long long sum=0;
	    int maxLen=0;
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        long long rem=sum%k;
	        rem=(rem+k)%k;
	        if(rem==0){
	            maxLen=max(maxLen,i+1);
	        }
	        if(mp.find(rem)!=mp.end()){
	            len=i-mp[rem];
	            maxLen=max(maxLen,len+1);
	        }
	        if(mp.find(rem)==mp.end()){
	            mp[rem]=i+1;
	        }
	    }
	    return maxLen;
	}
};